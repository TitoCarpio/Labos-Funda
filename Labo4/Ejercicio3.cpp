#include "iostream"
#include "conio.h"

using namespace std;

int main(){
    int num, opcion, eleccion;

    do{
        //Titulo del programa
        cout<<" ___________________________________"<<endl;
        cout<<"|                                   |"<<endl;
        cout<<"|     VERIFICACION NUMERICA 2.0     | "<<endl;     
        cout<<"|___________________________________|"<<endl<<endl;

        //solicitud de datos
        cout<<"  Ingrese el valor a verificar: ";
        cin>>num;

        //comparacion del valor

        if(num > 0){
            cout<<"  ________________________________"<<endl;
            cout<<"  El numero es positivo."<<endl<<endl;

        }else if(num < 0){
            cout<<"  ________________________________"<<endl;
            cout<<"  El numero es negativo."<<endl<<endl;
        }else{
            cout<<"  ________________________________"<<endl;
            cout<<"  El numero es cero."<<endl<<endl;
        }

        //opciones del menu del usuario

        cout<<"  Opciones:\n  Continuar = 1\n  Salir = press cualquier numero"<<endl;
        cin>>opcion;

        if(opcion == 1){
            eleccion = 1;

        }else if(opcion !=1 ){
            eleccion = 2;

        }else {
            cout<<"    Eleccion no valida"<<endl;

        }

    }while (eleccion == 1);






    getch();
    return 0;
}