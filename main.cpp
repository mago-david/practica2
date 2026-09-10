#include <iostream>
#include "titulo.h"
using namespace std;

int main(){
    int opcion;
    cout<<"que caso quieres ver: ";
    cin>>opcion;
    switch (opcion) {
    case 2:{
        aleatorio();
        break;
    }
    case 4:{
        char a[6];
        cout<<"Ingrese un numero de hasta 5 digitos: ";
        cin>>a;

        int numero = convercion(a);

        cout<< "Numero entero obtenido: "<<numero<<endl;

        char demostracion;
        int desmostracion_N;
        cout<<"un char tiene: "<<sizeof(demostracion)<<" bite y un int tiene: "<<sizeof(desmostracion_N)<<" bites y el resultado tiene: "<<sizeof(numero)<<" bites por ende el resultado es un int";
        break;
    }
    case 6:{
        char a[20];
        cout<< "ingrese una palabra con maximo 19 caracteres: ";
        cin>>a;
        manzana(a);
            break;
            }
    case 8:{
         char a[20];
         cout<<"ingrese un texto alfa numero maximo 19 caracteres: ";
         cin>>a;
        txt(a);
             break;
    }
    case 10:{
        char a[20];
        cout<<"ingrese un numero en romano: ";
        cin>>a;
        romano(a);
    }
    }
}




