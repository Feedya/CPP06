#include "ScalarConverter.hpp"

int ScalarConverter::que_des_nombres(std::string &str)
{
    size_t i = 0;
    int counter = 1;
    while (str[i] == ' ' || str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            counter = counter * -1;
        i++;
    }
    if (i == str.length())
        return (0);
    //ou on commence, ou on finit
    str.erase(0, i);
    i = 0;
    while (i != str.length())
    {
        if (isdigit(str[i]) == 0)
            return (0);
        i++;
    }
    if (counter == -1)
    {
        str.insert(0, "-");
    }
    return (1);
}

int ScalarConverter::que_des_characteres(std::string str)
{
    int i = 0;
    if (str.length() == 1)
    {
        if ((str[i] >= 26 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 126))
        return (1);
    }
    return (0);
}

int ScalarConverter::un_float(std::string str)
{
    if (str.empty())
        return 0;
    int i = 0;
    int dot_count = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    int len = str.length();
    if (len < 2)
        return 0; 
    while (i < len - 1) 
    {
        if (str[i] == '.')
        {
            dot_count++;
            if (dot_count > 1) return 0;
        }
        else if (str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }
    return (str[len - 1] == 'f');
}


int ScalarConverter::un_double(std::string str)
{
    if (str.empty())
        return 0;
    int i = 0;
    int dot_count = 0;
    int digit_count = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    int len = str.length();
    while (i < len) 
    {
        if (str[i] == '.')
        {
            dot_count++;
            if (dot_count > 1) return 0;
        }
        else if (str[i] >= '0' && str[i] <= '9')
            digit_count++;
        else
            return 0;
        i++;
    }
    return (dot_count == 1 && digit_count > 0);
}

int ScalarConverter::un_nan(std::string str)
{
    if (str == "nan")
        return (1);
    return (0);
}

void ScalarConverter::convert(const std::string& str_start)
{
    std::string str = str_start;
    if (que_des_nombres(str) == 1)
        print_que_des_nombres(str);
    else if (que_des_characteres(str) == 1)
        print_que_des_characteres(str);
    else if (un_float(str) == 1)
        print_float(str);
    else if (un_double(str) == 1)
        print_double(str);
    else if (un_nan(str) == 1)
        print_nan(str);
    else if (str == "+inf" || str == "+inff" || str == "inf" || str == "inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: inff" << std::endl;
        std::cout << "double: inf" << std::endl;
    }
    else if (str == "-inf" || str == "-inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    }
    else
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }

}