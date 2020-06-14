#include <iostream>
#include <conio.h>


using namespace std;

int pedirdato(){
    int num;
    cout<<"\tIngrese el valor a evaluar: ";
    cin>>num;
    cout<<endl;

    return num;
}

int MCD(int n1, int n2){
    int num1=n1, num2 = n2, residuo, mcd;

    do{
        residuo = num1 % num2;

        if (residuo != 0){
            num1 = num2;
            num2 = residuo;
        }else{
            mcd = num2;
        }
    }while (residuo != 0);
    
    return mcd;
}

int opcion(){
    int eleccion, opcion;

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

    int num1,num2,mcd, eleccion;

    cout<<endl;
    cout<<" ____________________________________________"<<endl;
    cout<<"|                                            |"<<endl;
    cout<<"|                CALCULO DE MCD              | "<<endl;
    cout<<"|____________________________________________|"<<endl<<endl;

    do{
        num1 = pedirdato();
        num2 = pedirdato();

        mcd = MCD(num1, num2);

        cout<<"\tEl MCD de "<<num1<<" y "<<num2<<" es :"<<mcd<<endl;
        cout<<" ____________________________________________"<<endl;

        eleccion = opcion();
    }while(eleccion == 1);    

    getch();
    return 0;
}