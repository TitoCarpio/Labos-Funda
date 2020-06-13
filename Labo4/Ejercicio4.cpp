#include "iostream"
#include "conio.h"
#include "string.h"

using namespace std;

int main(){

    char palabra[30];
    int longitud, opcion, eleccion;

    cout<<" ___________________________________"<<endl;
    cout<<"|       CADENAS DE CARACTERES       |"<<endl;
    cout<<"|___________________________________|"<<endl<<endl;

    //solicitude de texto al usuario

   // do{
        
        //numero de caracteres
        cout<<"  Ingrese la palabra a comprobar:"<<endl;
        cin.getline(palabra,30,'\n');

        longitud = strlen(palabra);

        if(longitud > 10){
            cout<<" __________________________________"<<endl;
            cout<<" La palabra ingresada tiene mas\n de 10 caracteres."<<endl;
        }else{
            cout<<" __________________________________"<<endl;
            cout<<" La palabra tiene menos de 10\n caracteres."<<endl;
        }

        // caracteres impares o pares

        if((longitud%2) == 0){
            cout<<" __________________________________"<<endl;
            cout<<" La cantidad de caracteres es par"<<endl;
 
        }else{
            cout<<" __________________________________"<<endl;
            cout<<" La cantidad de caracteres es impar"<<endl;
        }

        /*cout<<" Opciones\n Continuar = 1\n Salir = press cualquier numero"<<endl;
        cin>>opcion;

        if(opcion == 1){                            //opcion inavilitada.
            eleccion = 1;

        }else{
            eleccion = 2;

        }*/
        
        

  //  }while(eleccion == 1);





    getch();
    return 0;
}