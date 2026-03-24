#include "head.hpp"

int check_if_something_after_point_float(std::string str)
{
    size_t i = 0;
    bool apres_point = false;

    while (i < str.length())
    {
        if (str[i] == 'f' || str[i] == 'F')
            break;

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

void print_float_char(std::string str)
{
    if (check_if_something_after_point_float(str) == 1)
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

void    print_float_int(std::string str)
{
    std::cout << "int :";
    size_t i = 0;
    while (i != str.length())
    {
        if (str[i] == '.' || str[i] == 'f')
            break;
        std::cout << str[i];
        i++;
    }
    std::cout << std::endl;
}

void    print_float_float(std::string str)
{
    size_t i = 0;
    std::cout << "float :";
    while (i != str.length())
    {
        std::cout << str[i];
        i++;
    }
    std::cout << std::endl;
}

void    print_float_double(std::string str)
{
        std::cout << "double :";
        size_t i = 0;
        while (i != str.length())
        {
            if (str[i] == 'f')
                break;
            std::cout << str[i];
            i++;
        }
        std::cout << std::endl;
}

void    print_float(std::string str)
{
    print_float_char(str);
    print_float_int(str);
    print_float_float(str);
    print_float_double(str);
}