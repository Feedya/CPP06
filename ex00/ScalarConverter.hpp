#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include "head.hpp"

class ScalarConverter
{
    private:
        ScalarConverter()
        {

        }
        
        ~ScalarConverter()
        {

        }
    public:
        static int que_des_nombres(std::string &str);
        static int que_des_characteres(std::string str);
        static int un_float(std::string str);
        static int un_double(std::string str);
        static int un_nan(std::string str);
        static void convert(const std::string& str_start);
};






#endif