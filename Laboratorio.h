#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "Computadora.h"


class Laboratorio
{
    Computadora arreglo[5];
    size_t cont;

public:
    Laboratorio();
    void Agregarfinal(const Computadora &c);
    void Mostrar();
};

#endif // LABORATORIO_H
