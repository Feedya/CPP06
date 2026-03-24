#include "head.hpp"

static void    print_que_des_nombres_char(std::string str)
{
    std::cout << "char : ";
    int ascii = atoi(str.c_str());
    if (ascii >= 32 && ascii <= 126)
    {
        std::cout << "'" << char(ascii) << "'" <<  std::endl;
    }
    else
        std::cout << "impossible" << std::endl;
}

void    print_que_des_nombres_int(std::string str)
{
    std::cout << "int : " << str << std::endl; 
}

void    print_que_des_nombres_float(std::string str)
{
    std::cout << "float : " << str << ".0f" << std::endl;
}

void    print_que_des_nombres_double(std::string str)
{
    std::cout << "double : " << str << ".0" << std::endl;
}

void    print_que_des_nombres(std::string str)
{
    print_que_des_nombres_char(str);
    print_que_des_nombres_int(str);
    print_que_des_nombres_float(str);
    print_que_des_nombres_double(str);
}
