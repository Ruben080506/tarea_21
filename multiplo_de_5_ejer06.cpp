/*6) Escriba la función que determina si un número pasado como parámetro es múltiplo de 5
*/
#include <iostream>

using namespace std;

bool esMultiploDeCinco(int numero) {
    if (numero % 5 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int numero;

    cout << "Ingrese un número: ";
    cin >> numero;

    if (esMultiploDeCinco(numero)) {
        cout << "El número es múltiplo de 5." << endl;
    } else {
        cout << "El número no es múltiplo de 5." << endl;
    }

    return 0;
}
