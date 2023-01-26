// 1. Hacer un programa que solicite el ingreso de un número y que luego emita un cartel por pantalla aclarando 
//    si el mismo es múltiplo de 5.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N;

    cout << "Ingrese un numero: ";
    cin >> N;

    if (N % 5 == 0) {
        cout << "\n" << N << " es multiplo de 5." << endl;
    }
    else {
        cout << "\n" << N << " no es multiplo de 5." << endl;
    }

    return 0;
}
