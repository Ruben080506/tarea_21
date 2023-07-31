/*7) Diseñe la función que recibe como parámetro 1 entero positivo que indica una tabla de multiplicar. La función debe imprimir la tabla de multiplicar desde el 1 al 15. Por ejemplo:

5 x 1 = 5

5 x 2 = 10

5 x 3 = 15

...

...

5 x 15 = 75
*/
#include <iostream>

using namespace std;

void imprimirTablaMultiplicar(int numero) {
    for (int i = 1; i <= 15; i++) {
        int resultado = numero * i;
        cout << numero << " x " << i << " = " << resultado << endl;
    }
}

int main() {
    int numero;

    cout << "Ingrese un número para generar la tabla de multiplicar: ";
    cin >> numero;

    imprimirTablaMultiplicar(numero);

    return 0;
}