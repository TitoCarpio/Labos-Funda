#include <iostream>
#include <conio.h>

using namespace std;

//Funcion que imprime en pantalla el nombre del programa
void Titulo(){
    cout<<endl<<endl;
    cout<<"\t ___________________________________"<<endl;
    cout<<"\t|                                   |"<<endl;
    cout<<"\t|       BIENVENIDO A FACEBOOK       |"<<endl;
    cout<<"\t|___________________________________|"<<endl;
        
}

//Mustra las opciones que tiene el usuario
int Opciones(){
    int opcion;

    cout<<endl;
    cout<<"\t ELIJA UNA OPCION"<<endl;
    cout<<"\t 1.Inicio de sesion"<<endl;
    cout<<"\t 2.Salir"<<endl;

    cin>>opcion;

    return opcion;
}

//funcion que determina si la opcion elegida puede utilizarse
int validacion(int opcion){
    int validar;

    if(opcion == 1)
        validar = 1;
    else if(opcion == 2)
        validar = 2;
    else
        validar = 3; 
    
    return validar;

}

//funcion que valida los datos de usuario y solo permite 3 intentos
void Datos_sesion(){

    string usuario, password = "contrasena", dato;
    int contador = 0;
    do{
        cout<<"\t Ingrese su usuario:";
        cin>>usuario;
        cout<<"\t Contrase?a:";
        cin>>dato;

        if(dato == password){
            cout<<endl;
            cout<<"\t Exito!!!";
            contador = 3;
            cout<<endl<<endl;
        }else {
            cout<<endl;
            cout<<"\t ERROR!!!";
            contador++;
            cout<<endl;   
        }
   
    }while(contador<3);
}


int main(){
    int opcion, valor, contador;

    do{
        
        Titulo();
        opcion = Opciones();
        valor = validacion(opcion);

        if(valor == 1)
            Datos_sesion();
        else if(valor == 2){
            cout<<"\t Cerrando aplicacion....";
            cout<<endl<<endl;
            contador=1;
        }else{
            cout<<"\t Opcion invalida, intentelo de nuevo"<<endl;
            cout<<endl;
        }
            
    }while(contador < 1);

    getch();
    return 0;

}