/*10) Diseñe la función que calcula el resultado de la siguiente serie:

2^1 + 3^2 + 4^3 + 5^4 + ... N^(N-1)

N es un parámetro que indica el límite de la serie

Nota: El simbolo ^ significa: elevado a
*/
#include <iostream>
#include <cmath>

using namespace std;

double calcularSerie(int N) {
    double resultado = 0.0;

    for (int i = 2; i <= N; i++) {
        resultado += pow(i, i - 1);
    }

    return resultado;
}

int main() {
    int N;

    cout << "Ingrese el valor de N: ";
    cin >> N;

    double resultado = calcularSerie(N);

    cout << "El resultado de la serie es: " << resultado << endl;

    return 0;
}