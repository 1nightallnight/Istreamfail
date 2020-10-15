#include <iostream>
#include "Laboratorio.h"

using namespace std;

int main()
{

    Computadora com;
    com.setNombre_Equipo("Karen Montserrat");
    com.setModelo("DELL L A T I T U D E E5410");
    com.setSistema_Operativo("Windows 10");
    com.setMemoria_Ram("6144MB RAM");

    Laboratorio lab;

    lab.Agregarfinal(com);


    Computadora c04;
    cin >> c04;
    lab.Agregarfinal(c04);

    lab.Mostrar();
    return 0;
}
