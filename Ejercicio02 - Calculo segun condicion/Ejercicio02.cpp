// 2. Hacer un programa que solicite el ingreso de dos números y luego calcular:
//       a. La resta si el primero es mayor que el segundo.
//       b. La suma si son iguales.
//       c. El producto si el primero es menor.
//    Se deberá emitir un cartel por pantalla con el resultado correspondiente.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int A, B, R;

    cout << "Ingrese el primer numero: ";
    cin >> A;
    cout << "Ingrese el segundo numero: ";
    cin >> B;

    if (A > B)
    {
        R = A - B;
    }
    else if (A < B)
    {
        R = A * B;
    }
    else
    {
        R = A + B;
    }

    cout << "\nEl resultado es: " << R << endl;
    return 0;
}