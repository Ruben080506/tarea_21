/*11) Una función recibe como parámetro un entero que indica las filas de una figura. Adicionalmente, recibe como parámetro un string que indica el relleno de la figura a dibujar. Por ejemplo, si filas es 4 y el relleno es '+', la figura sería:

+

++

+++

++++
*/
#include <iostream>
#include <string>

using namespace std;

void dibujarFigura(int filas, const string& relleno) {
    for (int i = 1; i <= filas; i++) {
        string linea = relleno;
        linea.resize(i, relleno[0]); // Ajusta la longitud de la línea según el número de fila

        cout << linea << endl;
    }
}

int main() {
    int filas;
    string relleno;

    cout << "Ingrese el número de filas: ";
    cin >> filas;

    cout << "Ingrese el carácter de relleno: ";
    cin >> relleno;

    dibujarFigura(filas, relleno);

    return 0;
}
