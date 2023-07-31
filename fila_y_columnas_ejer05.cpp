/*5) Una función recibe 2 parámetros que indican el total de filas y columnas que se deben emplear para imprimir un rectángulo por pantalla.
Por ejemplo rectangulo(2,5), imprime en pantalla:
* * * * *
* * * * *
*/
#include <iostream>

using namespace std;

void rectangulo(int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int filas, columnas;

    cout << "Ingrese el número de filas: ";
    cin >> filas;

    cout << "Ingrese el número de columnas: ";
    cin >> columnas;

    rectangulo(filas, columnas);

    return 0;
}