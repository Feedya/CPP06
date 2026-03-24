#include "head.hpp"
#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        std::string ligne = argv[1];
        ScalarConverter::convert(ligne);
    }
    else
        std::cout << "faut mettre qqc" << std::endl;
    return (0);
}
