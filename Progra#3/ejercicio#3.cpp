#include <iostream>
#include <conio.h>

using namespace std;

int calculo(){
    int dato, prueba;
    cout<<"\tIngrese el ano a verificar:";
    cin>>dato;
    cout<<endl;

    if(dato % 4 == 0 && dato%100 !=0 || dato % 400 ==0){
        prueba = 1;
    }else {
        prueba =2;
    }

    return prueba;

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
    int dato, eleccion;

    cout<<endl;
    cout<<" _____________________________________________"<<endl;
    cout<<"|                                             |"<<endl;
    cout<<"|           CALCULO DE ANO BISIESTO           |"<<endl;
    cout<<"|_____________________________________________|"<<endl<<endl;


    do{
        dato=calculo();
    
        if(dato == 1){
        cout<<"\tEl ano es bisiesto."<<endl;
         cout<<" _____________________________________________"<<endl;
        }else {
        cout<<"\tEl ano no es bisiesto."<<endl;
         cout<<" _____________________________________________"<<endl;
        }

        eleccion = opcion();

    }while(eleccion==1);

    getch();
    return 0;
}