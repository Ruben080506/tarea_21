/* 2) Una función recibe como parámetro 1 entero que indica el día de la Semana. La función debe devolver el nombre del día de la semana. 
Por ejemplo, si es 1, devuelve "LUNES"; si es 2 devuelve "Martes"; etc.
*/

#include <iostream>
using namespace std;

string nombreDiaSemana(int dia) {
    switch(dia) {
        case 1:
            return "LUNES";
        case 2:
            return "MARTES";
        case 3:
            return "MIERCOLES";
        case 4:
            return "JUEVES";
        case 5:
            return "VIERNES";
        case 6:
            return "SABADO";
        case 7:
            return "DOMINGO";
        default:
            return "DIA INVALIDO";
    }
}

int main() {
    int dia = 3; // Ejemplo de día de la semana
    cout << nombreDiaSemana(dia) << endl; // Imprime "MIERCOLES"
    return 0;
}
