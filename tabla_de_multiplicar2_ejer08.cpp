/*8) Diseñe la función que recibe como parámetro un entero N comprendido 1 y 10. La función debe imprimir las tablas de múltiplicar desde el 1 a N. Por ejemplo, si N=3, se imprimirá:

Tabla del 1

1 x 1 = 1

1 x 2 = 2

...

1 x 10 = 10



Tabla del 2

2 x 1 = 2

2 x 2 = 4

...

2 x 10 = 20



Tabla del 3

3 x 1 = 3

3 x 2 = 3

...

3 x 10 = 30
*/
#include <iostream>

using namespace std;

//La idea era crear una primera función que imprima una sola tabla, y luego otra función que utilizando un bucle llame a la primera función 

void imprimirTablasMultiplicar(int N) {
    for (int i = 1; i <= N; i++) {
        cout << "Tabla del " << i << endl;
        for (int j = 1; j <= 10; j++) {
            int resultado = i * j;
            cout << i << " x " << j << " = " << resultado << endl;
        }
        cout << endl;
    }
}

int main() {
    int N;

    cout << "Ingrese un número entre 1 y 10: ";
    cin >> N;

    imprimirTablasMultiplicar(N);

    return 0;
}
