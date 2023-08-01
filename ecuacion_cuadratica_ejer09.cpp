/*9) Diseñe la función que calcula la ecuación cuadrática, usando las fórmulas siguientes:

x1 = (-b+ raizCuadrada(b*b - 4*a*c))/(2*a)

x2 = (-b- raizCuadrada(b*b - 4*a*c))/(2*a)

Los valores a,b,c pasan como parámetros de la función.

x1 - x2 son parámetros por referencia que devuelven los resultados de la ecuación.

La función devuelve 1 si es una ecuación válida, y 0 si la ecuación no es válida. 
*/
#include <iostream>
#include <cmath>

using namespace std;


//falta considerar otras condiciones, por ejemplo la división para 0
int calcularEcuacionCuadratica(double a, double b, double c, double& x1, double& x2) {
    double discriminante = b * b - 4 * a * c;

    if (discriminante < 0) {
        return 0; // La ecuación no es válida
    }

    x1 = (-b + sqrt(discriminante)) / (2 * a);
    x2 = (-b - sqrt(discriminante)) / (2 * a);

    return 1; // La ecuación es válida
}

int main() {
    double a, b, c;
    double x1, x2;

    cout << "Ingrese los valores de a, b y c: ";
    cin >> a >> b >> c;

    int resultado = calcularEcuacionCuadratica(a, b, c, x1, x2);

    if (resultado == 1) {
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else {
        cout << "La ecuación no tiene soluciones reales." << endl;
    }

    return 0;
}
