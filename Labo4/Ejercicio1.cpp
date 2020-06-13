#include "iostream"
#include "conio.h"

using namespace std;

int main(){

    int num1, num2, opcion, operacion, eleccion;

    do{
        //Nombre del programa

        cout<<" _________________________________"<<endl;
        cout<<"|                                 |"<<endl;
        cout<<"|          CERO DESECHOS          | "<<endl;
        cout<<"|_________________________________|"<<endl<<endl;

        //Pedir y comparar datos

        cout<<"    Ingrese el valor 1: "; cin>>num1;
        cout<<"    Ingrese el valor 2: "; cin>>num2;

        if((num1%num2) == 0){
            operacion = num1/num2;
            cout<<"    Los valores son divisibles\n"; 
            cout<<"    _____________________________"<<endl;  
            cout<<"    El resultado es: "<<operacion<<endl<<endl;
  
        }else{
            cout<<"    _____________________________"<<endl;
            cout<<"    La division no es entera"<<endl;
        }

        cout<<"    Opciones\n    Continuar = 1\n    Salir = press cualquier numero"<<endl;
        cin>>opcion;
       
        if(opcion == 1){
            eleccion = 1;

        }else if(opcion !=1 ){
            eleccion = 2;

        }else {
            cout<<"    Eleccion no valida"<<endl;

        }
    }

    
    while(eleccion == 1);

    getch ();
    return  0;
}