// 4. Un importante negocio de desinfectante líquido realiza descuentos dependiendo de la cantidad de litros 
//    vendidos según la siguiente escala:
//       a. Si vende menos de 100 litros, no hay descuento.
//       b. Si vende entre 101 y 300 litros, el descuento es del 10 % .
//       c. Si vende entre 301 y 500 litros, el descuento es del 15 % .
//       d. Finalmente, si la venta es de más de 500 litros, el descuento es del 25 % .
//    Hacer un programa que solicite el ingreso del importe total de la venta y la cantidad de litros vendidos 
//    y calcule y emita el importe con el descuento aplicado.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float IV, IF;
    int CL;
    float const D1 = 0.75;
    float const D2 = 0.85;
    float const D3 = 0.90;

    cout << "Importe de venta: $";
    cin >> IV;
    cout << "Cantidad de litros: ";
    cin >> CL;

    if (CL > 500)
    {
        IF = IV * D1;
    }
    else if (CL <= 500 && CL > 300)
    {
        IF = IV * D2;
    }
    else if (CL <= 300 && CL > 100)
    {
        IF = IV * D3;
    }
    else
    {
        IF = IV;
    }

    cout << "\nImporte total: $" << IF << endl;
    return 0;
}