// 8. El negocio de desinfectante antes mencionado vende, además, detergente suelto, y los precios se aplican 
//    según la siguiente escala:
//       a. 25 ARS por litro los primeros 50 litros.
//       b. 20 ARS por litro si la venta es de 51 a 200 litros.
//       c. 15 ARS por litro si la venta es de 201 a 500 litros.
//       d. 10 ARS por litro si la venta es de más de 500 litros.
//    Además, si paga en efectivo, tiene un adicional del 10 % sobre el importe final.
//    Hacer un programa que solicite la cantidad de litros vendidos y el tipo de pago (ingresará 1 si paga en
//    efectivo y 0 con cualquier otro medio de pago) y calcule y emita por pantalla el monto final a abonar 
//    por el cliente.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float MP, MF;
    float const P1 = 25;
    float const P2 = 20;
    float const P3 = 15;
    float const P4 = 10;
    float const Ad = 1.10;
    int CL, TP;

    cout << "Cantidad de litros: ";
    cin >> CL;
    cout << "Tipo de pago (1 = efectivo / 0 = otro): ";
    cin >> TP;

    if (CL > 500)
    {
        MP = CL * P4;
    }
    else if (CL <= 500 && CL > 200)
    {
        MP = CL * P3;
    }
    else if (CL <= 200 && CL > 50)
    {
        MP = CL * P2;
    }
    else
    {
        MP = CL * P1;
    }

    if (TP == 1)
    {
        MF = MP * Ad;
    }
    else
    {
        MF = MP;
    }

    cout << "\nPago total: $" << MF << endl;
    return 0;
}