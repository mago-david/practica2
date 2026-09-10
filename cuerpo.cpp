#include <iostream>
#include "titulo.h"

using namespace std;
void romano(const char rom[20]){
    int resultado=0;
    for(const char *ptc=rom;*ptc !='\0';ptc++){
        int actual=0;
        if (*ptc=='M' || *ptc=='m') {
            actual=1000;
        }
        else if (*ptc=='D' || *ptc=='d') {
            actual=500;
        }
        else if (*ptc=='C' || *ptc=='c') {
            actual=100;
        }
        else if (*ptc=='L' || *ptc=='l') {
            actual = 50;
        }
        else if (*ptc=='X' || *ptc=='x') {
            actual=10;
        }
        else if (*ptc=='V' || *ptc=='v') {
            actual=5;
        }
        else if (*ptc=='I' || *ptc=='i') {
            actual=1;
        }

        int proximo=0;
        if (*(ptc+1)=='M' || *(ptc+1)=='m') {
            proximo=1000;
        }
        else if (*(ptc+1)=='D' || *(ptc+1)=='d') {
            proximo=500;
        }
        else if (*(ptc+1)=='C' || *(ptc+1)=='c') {
            proximo=100;
        }
        else if (*(ptc+1)=='L' || *(ptc+1)=='l') {
            proximo=50;
        }
        else if (*(ptc+1)=='X' || *(ptc+1)=='x') {
            proximo=10;
        }
        else if (*(ptc+1)=='V' || *(ptc+1) =='v') {
            proximo=5;
        }
        else if (*(ptc+1)=='I' || *(ptc+1)=='i') {
            proximo=1;
        }
        if (actual < proximo) {
                resultado= resultado-actual;
            } else {
                resultado = resultado+actual;
                  }


        }
    cout <<"El numero ingresado fue: "<< rom << endl<<"Que corresponde a: "<<resultado<< endl;
    }


void txt(const char texto[20]){
    char letra[20];
    char numero[20];
    int n=0;
    int l=0;
    for (const char *apc=texto;*apc !='\0';apc++) {
        if (*apc>='0'&& *apc<='9'){
            numero[n]=*apc;
            n++;
        }
        else{
            letra[l]=*apc;
            l++;
        }
}
    letra[l]='\0';
    numero[n]='\0';
    cout<<"original: "<<texto<<endl<<"letras:"<<letra<<endl<<"numero:"<<numero<<endl;
}
void manzana(const char palabra[20]){
    char nuevo[20];
    int i=0;
    for (const char *apc = palabra; *apc != '\0'; apc++){
        if( *apc>='a' && *apc<='z')
            nuevo[i]=*apc-32;
        else
            nuevo[i]=*apc;
        i++;
    }
    cout<<"palabra original: "<<palabra<<endl<<"palabra nueva :"<<nuevo;
}
int convercion(const char numeros[20]){
    int r=0;
    for (const char *apc = numeros; *apc != '\0'; apc++){
        r=r*10+(*apc-'0');
    }
    return r;

}
void aleatorio() {
    int aleatorio_maso=0;
    cout<<"ingresa un numero cualquiera: "<<endl;// ingresa un numero para hacer un proceso semi aleatorio (depende los numeros)
    cin>>aleatorio_maso;
    char letras [200];//arreglo inicial
    int abc[26]={0} ;//contador
    // constantes generador congruencia lineal
    const int a=1664525;// multiplicador
    const int c=1013904223;// garantiza que no quede en 0
    const int b=218888;//limite del %
    for (int i=0;i<200;i++){//200 porque son 200 espacios por llenar
        aleatorio_maso=(a*aleatorio_maso+c)%b;//formula generador congruencia lineal= X= (a*x+c)%b
        char LETRA='A'+(aleatorio_maso %26 + 26)%26;//se asegura que sea positivo (si se quita el+26 da error por lo que investigue es porque puede dar numeros negativos y desde el indice "a" no hay negativos por ende no pulula
        letras[i]=LETRA;//se guarda el nuevo valor
        abc[LETRA-'A']++;// contador de nuevas letras se resta A en la tabla ascii  sumandolo a los indices correspondintes aumentando el contador
    }
    for (int i=0;i<200;i++) {
        cout<< letras[i];
    }
    cout<<endl;
    cout<< "Conteo de frecuencias:"<<endl;
    for (int i=0;i<26;i++){
        if (abc[i]>0) {
            cout<<(char)('A' + i)<<":"<<abc[i]<<endl;//(char) imprime el resultado convertido a char a+i para imprimir la letra actual
        }

    }
    cout<<"direccion memoria abc:"<<&abc<<endl;
}


