#include "Data.hpp"
#include "Serializer.hpp"

int     main(void)
{
    Data *d = new Data;
    d->nombre = 2;
    d->color = "rouge";
    uintptr_t nombre = Serializer::serialize(d);
    std::cout << nombre << std::endl;
    d = NULL;
    Data *r = Serializer::deserialize(nombre);
    std::cout << r->color << " " << r->nombre << std::endl;
    delete r;
    return (0);
}