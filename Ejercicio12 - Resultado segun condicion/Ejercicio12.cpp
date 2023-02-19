// 12. Hacer un programa para ingresar tres números y emitir un cartel aclaratorio si la suma de los 
//     dos primeros es mayor al producto del segundo con el tercero.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int A, B, C;

    cout << "Ingrese el primer numero: ";
    cin >> A;
    cout << "Ingrese el segundo numero: ";
    cin >> B;
    cout << "Ingrese el tercer numero: ";
    cin >> C;

    if ((A + B) > (B * C))
    {
        cout << "\nLa suma de los dos primeros (" << A + B << ") es mayor al producto del segundo con el tercero ("
            << B * C << ")." << endl;
    }
    return 0;
}