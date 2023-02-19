// 9. Una importante marca de computadoras permite elegir cierta configuración del equipo a comprar. 
//    Para ello existe la siguiente escala de precios:
//                   i5(1)     i7(2)    i9(3)
//        8 RAM(1) USD  800  USD  900  USD 1200
//       16 RAM(2) USD  900  USD 1000  USD 1400
//       32 RAM(3) USD 1000  USD 1400  USD 2000
//    Además, el equipo viene con un disco que permite almacenar 500 GB de información y que se puede ampliar
//    a 1 TB si así lo desea, lo cual tiene un costo adicional de USD 300.
//    Hacer un programa que solicite la opción de procesador, la opción de memoria RAM, y si extiende el disco 
//    o no (ingresa 1 para extender y 0 para no extender) y calcule y emita por pantalla el monto de la máquina
//    seleccionada.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int P, R, D;
    float MP, MF;
    float const Ad = 300;

    cout << "Procesador: ";
    cin >> P;
    cout << "RAM: ";
    cin >> R;
    cout << "Ampliar disco a 1TB (1 = Si / 0 = No): ";
    cin >> D;

    switch (P)
    {
    case 1:
        switch (R)
        {
        case 1:
            MP = 800;
            break;
        case 2:
            MP = 900;
            break;
        case 3:
            MP = 1000;
            break;
        default:
            cout << "\nError: opcion no encontrada." << endl;
            break;
        }
        break;

    case 2:
        switch (R)
        {
        case 1:
            MP = 900;
            break;
        case 2:
            MP = 1000;
            break;
        case 3:
            MP = 1400;
            break;
        default:
            cout << "\nError: opcion no encontrada." << endl;
            break;
        }
        break;

    case 3:
        switch (R)
        {
        case 1:
            MP = 1200;
            break;
        case 2:
            MP = 1400;
            break;
        case 3:
            MP = 2000;
            break;
        default:
            cout << "\nError: opcion no encontrada." << endl;
            break;
        }
        break;

    default:
        cout << "\nError: opcion no correcta." << endl;
        break;
    }

    if (MP > 0)
    {
        if (D == 1)
        {
            MF = MP + Ad;
        }
        else
        {
            MF = MP;
        }
        cout << "\nPago total por la PC: $" << MF << endl;
    }
    else
    {
        cout << "\nError: opcion no correcta." << endl;
    }

    return 0;
}