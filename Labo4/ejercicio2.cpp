#include "iostream"
#include "conio.h"

using namespace std;

int main(){
  int num, opcion, eleccion;

  do{
    //Titulo del programa
    cout<<" ___________________________________"<<endl;
    cout<<"|                                   |"<<endl;
    cout<<"|       VERIFICACION NUMERICA       | "<<endl;     
    cout<<"|___________________________________|"<<endl<<endl;

    cout<<"  Ingrese el valor a verificar: ";
    cin>>num;

    //comparacion del valor

    if((num%2)==0){
      cout<<"  ________________________________"<<endl;
      cout<<"  El valor es par."<<endl<<endl;

    }else if((num%2) != 0){
      cout<<"  ________________________________"<<endl;
      cout<<"  El valor es impar."<<endl<<endl;
    }
    /*
    }else{
      cout<<"  ________________________________"<<endl;
      cout<<" El valor ingresado no es numerico"<<endl;               //opcion no disponible

    }*/


    //opciones del menu del usuario

    cout<<"    Opciones\n     Continuar = 1\n     Salir = press cualquier numero"<<endl;
    cin>>opcion;

    if(opcion == 1){
      eleccion = 1;

    }else if(opcion !=1 ){
      eleccion = 2;

    }else {
      cout<<"    Eleccion no valida"<<endl;

    }


  }while(eleccion == 1);


   getch();
   return 0;
}
