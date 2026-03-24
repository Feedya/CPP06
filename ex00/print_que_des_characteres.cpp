#include "head.hpp"

void    print_que_des_char_char(std::string str)
{
    std::cout << "char :";
    std::cout << str << std::endl;
}

void    print_que_des_char_int(std::string str)
{
    std::cout << "int :";
    int ascii = str[0];
    std::cout << ascii << std::endl;
}

void    print_que_des_char_float(std::string str)
{
    std::cout << "float :";
    int ascii = str[0];
    std::cout << ascii << ".0f" << std::endl;
}

void    print_que_des_char_double(std::string str)
{
    std::cout << "double :";
    int ascii = str[0];
    std::cout << ascii << ".0" << std::endl;
}

void    print_que_des_characteres(std::string str)
{
    print_que_des_char_char(str);
    print_que_des_char_int(str);
    print_que_des_char_float(str);
    print_que_des_char_double(str);
}