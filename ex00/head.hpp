#ifndef HEAD_HPP
#define HEAD_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <iomanip>

void    print_que_des_nombres(std::string str);
void    print_que_des_characteres(std::string str);
void    print_float(std::string str);
void    print_double(std::string str);

int check_if_something_after_point(std::string str);
int take_number(std::string str);


void    print_nan(std::string str);
#endif