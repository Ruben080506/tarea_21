/*3) Una función recibe como parámetro 1 entero que indica el mes de año. La función debe devolver el total de días que tiene ese mes. Por ejemplo:
Si el mes es  1 debe devolver 31.  
si el mes es  2 debe devolver 28.
si el mes es  3 debe devolver 31.
si el mes es  4 debe devolver 30.
si el mes es  5 debe devolver 31.
si el mes es  6 debe devolver 30.
etc.
*/

#include <iostream>

using namespace std;

int dias_mes(int mes) {
    int dias;

    switch (mes) {
        case 1: // Enero
            dias = 31;
            break;
        case 2: // Febrero
            dias = 28;
            break;
        case 3: // Marzo
            dias = 31;
            break;
        case 4: // Abril
            dias = 30;
            break;
        case 5: // Mayo
            dias = 31;
            break;
        case 6: // Junio
            dias = 30;
            break;
        case 7: // Julio
            dias = 31;
            break;
        case 8: // Agosto
            dias = 31;
            break;
        case 9: // Septiembre
            dias = 30;
            break;
        case 10: // Octubre
            dias = 31;
            break;
        case 11: // Noviembre
            dias = 30;
            break;
        case 12: // Diciembre
            dias = 31;
            break;  
        default:
            dias = -1; // Mes no válido, se devuelve -1 para indicar error.
    }

    return dias;
}

int main() {
    int mes;

    cout << "Ingresa el número del mes (1-12): ";
    cin >> mes;

    if (dias_mes(mes) == -1) {
        cout << "Mes inválido." << endl;
    } else {
        cout << "El mes " << mes << " tiene " << dias_mes(mes) << " días." << endl;
    }

    return 0;
}