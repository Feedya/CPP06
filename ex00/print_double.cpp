#include "head.hpp"

int check_if_something_after_point(std::string str)
{
    size_t i = 0;
    bool apres_point = false;

    while (i < str.length())
    {
        if (!apres_point)
        {
            if (str[i] == '.')
                apres_point = true;
            else if (str[i] != '+' && str[i] != '-' && (str[i] < '0' || str[i] > '9'))
                return 0;
        }
        else
        {
            if (str[i] != '0')
                return 0;
        }
        i++;
    }
    return 1;
}

int take_number(std::string str)
{
    int number = 0;
    size_t i = 0;
    
    if (i < str.length() && (str[i] == '+' || str[i] == '-'))
        i++;

    while (i < str.length() && str[i] != '.')
    {
        if (str[i] <= '9' && str[i] >= '0')
        {
            number = (number * 10) + (str[i] - '0');
        }
        i++;
    }
    return number;
}

void print_double_char(std::string str)
{
    if (check_if_something_after_point(str) == 1)
    {
        int nombre = take_number(str);
        if (nombre >= 32 && nombre <= 126)
        {
            std::cout << "char : '" << static_cast<char>(nombre) << "'" << std::endl;
        }
        else
        {
            std::cout << "char : impossible" << std::endl;
        }
    }
    else
    {
        std::cout << "char : impossible" << std::endl;
    }
}

void    print_double_int(std::string str)
{
    size_t i = 0;
    std::cout << "int :";
    while (i != str.length())
    {
        if (str[i] == '.')
            break;
        std::cout << str[i];
        i++;
    }
    std::cout << std::endl;
}

void    print_double_float(std::string str)
{
    size_t i = 0;
    std::cout << "float :";
    while (i != str.length())
    {
        std::cout << str[i];
        i++;
    }
    std::cout << "f" << std::endl;
}

void    print_double_double(std::string str)
{
    std::cout << "double :";
    size_t i = 0;
    while (i != str.length())
    {
        std::cout << str[i];
        i++;
    }
    std::cout << std::endl;
}

void    print_double(std::string str)
{
    print_double_char(str);
    print_double_int(str);
    print_double_float(str);
    print_double_double(str);
}