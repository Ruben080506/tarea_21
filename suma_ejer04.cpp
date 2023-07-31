/*4) Una función recibe como parámetro 2 números enteros, que indican el inicio y fin de una serie. Se pide calcular la sumatoria de los números comprendidos entre el inicio y fin de la serie. 
Desde el main puede realizar llamadas como las siguientes:

sumatoria(4,9) hace la suma de : 4+5+6+7+8+9

sumatoria(9,4) hace la suma de : 9+8+7+6+5+4
*/

#include <iostream>

using namespace std;

int sumatoria(int inicio, int fin) {
    int suma = 0;

    if (inicio <= fin) {
        for (int i = inicio; i <= fin; i++) {
            suma += i;
        }
    } else {
        for (int i = inicio; i >= fin; i--) {
            suma += i;
        }
    }

    return suma;
}

int main() {
    int inicio, fin;

    cout << "Ingrese el número de inicio: ";
    cin >> inicio;

    cout << "Ingrese el número de fin: ";
    cin >> fin;

    int resultado = sumatoria(inicio, fin);

    cout << "La sumatoria es: " << resultado << endl;

    return 0;
}
