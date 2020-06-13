#include <iostream>
#include <conio.h>

using namespace std;

//pistas al usuario y muestra intentos restantes
int adivinar(int ns, int inten ){

    int n, contador = inten, intentos;

    if(contador <=4){
        cout<<"\tIngresa un numero entre 1-100: ";
        cin>>n;
        cout<<endl;
        if(n<=100){
            if(n<ns){
                cout<<"\tEl numero magico es mayor."<<endl;
                intentos= 5 - contador;
                cout<<"\tIntentos restantes: "<<intentos<<endl<<endl;
                cout<<" _____________________________________________"<<endl;

            }else if(n>ns){
                cout<<"\tEl numero magico es menor."<<endl;
                intentos= 5 - contador;
                cout<<"\tIntentos restantes: "<<intentos<<endl<<endl;
                cout<<" _____________________________________________"<<endl;
            }else {
                cout<<"\tFELICIDADES!!! Lo has adivinado ^-^"<<endl;
                cout<<" _____________________________________________"<<endl; 
            }   
        
        }else {
            cout<<"\tEl numero magico esta entre 1-100."<<endl;
            intentos= 5 - contador;
            cout<<"\tIntentos restantes: "<<intentos<<endl<<endl;
            cout<<" _____________________________________________"<<endl;
        }
    } else{
        cout<<"\tLo siento :( tus intentos se terminaron."<<endl;  
    }
}

//desplega menu de opciones
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

    int nsecreto = 17, valor, eleccion, contador=1;


//titulo del programa al iniciarlo.
    cout<<" _____________________________________________"<<endl;
    cout<<"|              ADIVINA ADIVINADOR             |"<<endl;
    cout<<"|                     ^-^                     |"<<endl;
    cout<<"|_____________________________________________|"<<endl<<endl;

//bucle que repite las funciones hasta que el usuario decida o se le acaben los intentos.
    do{
        valor = adivinar(nsecreto,contador);
        eleccion = opcion();
        contador++;

    }while(eleccion == 1);
/*el getch, permite que nuestro ejecutable no se cierre hasta que el usuario
 *presione cualquier tecla*/
    getch();
    return 0;
}