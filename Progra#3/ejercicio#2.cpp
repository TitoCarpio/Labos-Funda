#include <iostream>
#include <conio.h>

using namespace std;

int adivinar(int ns ){

    int n, contador = 0, intentos;

    if(contador < 5){
        cout<<"\tIngresa un numero: ";
        cin>>n;
        cout<<endl;

        if(n<ns){
            cout<<"\tEl numero magico es mayor."<<endl;
            contador++;
            intentos= 5 - contador;
            cout<<"\tIntentos restantes: "<<intentos<<endl<<endl;
        }else if(n>ns){
            cout<<"\tEl numero magico es menor."<<endl;
            contador++;
            intentos= 5 - contador;
            cout<<"\tIntentos restantes: "<<intentos<<endl<<endl;
        }else {
            cout<<"\tFELICIDADES!!! Has encontrado el numero."<<endl;
            
        }
    }else{
        cout<<"\tLo siento :( tus intentos se terminaron."<<endl;
            
    }
}

int opcion(){
    int opcion, eleccion;

    cout<<"\tOpciones:"<<endl<<"\t1. Continuar"<<endl<<"\t2. Salir"<<endl;
    cin>>opcion;
    cout<<endl; 

    if(opcion == 1){
        eleccion =1;
    }else{
        eleccion = 2;
    }
    return eleccion;
}

int main(){

    int nsecreto = 17, valor, eleccion;

    cout<<" _____________________________________________"<<endl;
    cout<<"|              ADIVINA ADIVINADOR             |"<<endl;
    cout<<"|                     ^-^                     |"<<endl;
    cout<<"|_____________________________________________|"<<endl<<endl;

    do{

    valor = adivinar(nsecreto);
    eleccion = opcion();





    }while(eleccion == 1);

    getch();
    return 0;
}