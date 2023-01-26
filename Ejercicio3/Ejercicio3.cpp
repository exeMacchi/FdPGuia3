// 3. Hacer un programa para ingresar dos números. Si el segundo es distinto de cero, calcular la división 
//    del primero por el segundo y mostrar el resultado por pantalla; caso contrario, emitir un cartel 
//    aclarando que no se puede dividir por cero.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float A, B, R;

    cout << "Ingresar el primer numero: ";
    cin >> A;
    cout << "Ingresar el segundo numero: ";
    cin >> B;

    if (B != 0) {
        R = A / B;
        cout << "\nEl resultado es: " << R << endl;
    }
    else {
        cout << "\nError: no es posible dividir por 0." << endl;
    }

    return 0;
}
