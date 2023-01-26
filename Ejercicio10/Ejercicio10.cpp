// 10. Hacer un programa que solicite cuatro números y emitir un cartel aclaratorio si son todos iguales 
//     entre sí, caso contrario, no emitir nada.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int A, B, C, D;

    cout << "Ingrese el primer numero: ";
    cin >> A;
    cout << "Ingrese el segundo numero: ";
    cin >> B;
    cout << "Ingrese el tercer numero: ";
    cin >> C;
    cout << "Ingrese el cuarto numero: ";
    cin >> D;

    if (A == B && B == C && C == D) {
        cout << "\nTodos los numeros son iguales." << endl;
    }

    return 0;
}
