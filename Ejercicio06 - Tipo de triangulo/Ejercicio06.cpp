// 6. Hacer un programa para ingresar por teclado la longitud de los tres lados de un tri�ngulo y que luego 
//    determine e informe con un cartel aclaratorio a qu� tipo de tri�ngulo corresponde:
//       a. Equil�tero: cuando los tres lados sean iguales.
//       b. Is�sceles: cuando dos de los tres lados sean iguales.
//       c. Escaleno: cuando todos los lados sean distintos.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int L1, L2, L3;

    cout << "Introduzca la longitud del primer lado: ";
    cin >> L1;
    cout << "Introduzca la longitud del segundo lado: ";
    cin >> L2;
    cout << "Introduzca la longitud del tercer lado: ";
    cin >> L3;

    if (L1 == L2 && L2 == L3)
    {
        cout << "\nTriangulo equilatero" << endl;
    }
    else if (L1 != L2 && L2 != L3 && L3 != L1)
    {
        cout << "\nTriangulo escaleno" << endl;
    }
    else
    {
        cout << "\nTriangulo isosceles" << endl;
    }

    return 0;
}