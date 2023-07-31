//Primeros pasos con vectores

#include <iostream>

using namespace std; 

int main()
{
    const int MAX = 10;
    int numeros [MAX] = {100,23,56,67,1,45,99,78,4};


    cout<< endl<< "Los elementos del vector son: ";

    for (int k=0; k <MAX ; k++)
    {
        cout<<numeros[k]<<endl;
    }
     
    //Lectura del vector por teclado 
    cout<<endl<< "Ingrese los elementos del vector:"<<endl;
    for(int k=0; k<MAX; k++)
    {
        cout<<"Ingrese el elemento de la posicion:"<<k<<"  "; 
        cin >> numeros[k];
    }
    cout<< endl<< "Usted ingreso los siguuientes elementos:" <<endl;
    for (int k=0; k <MAX ; k++)
    {
        cout<<numeros[k]<<"    ";
    }
    return 0;
}