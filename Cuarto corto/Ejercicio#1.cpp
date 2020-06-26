#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

//Imprime el nombre del programa
void nombre(){
    cout<<endl;
    cout<<" _________________________________________________"<<endl;
    cout<<"|                                                 |"<<endl;
    cout<<"|                 CLAVE MURCIELAGO                |"<<endl;
    cout<<"|_________________________________________________|"<<endl<<endl;
}

//Pide el mensaje a codificar
void llenado(char array[]){

    cout<<endl;
    cout<<"\tIngrese el mensaje a codificar:"<<endl;
    cout<<" _________________________________________________"<<endl;
    cin.getline(array,30,'\n');
    cout<<" _________________________________________________"<<endl;
}

//obtiene el tama?o del arreglo
int Longitud(char arreglo[]){
    int longitud;
    longitud = strlen(arreglo);
    return longitud;
}

//Codifica el mensaje a clave murcielago
void codificar(char arreglo[], int n){
    char letra1 = 'm',letra2='u', letra3='r', 
    letra4='c', letra5='i', letra6='e', letra7='l', letra8='a', letra9='g', letra10='o';

    for(int i=0;i<n;i++){
        char auxiliar;
        
        if(arreglo[i] == letra1){
            arreglo[i]= '0';
        }else if(arreglo[i] == letra2){
            arreglo[i]= '1';
        }else if(arreglo[i] == letra3){
            arreglo[i]= '2';
        }else if(arreglo[i] == letra4){
            arreglo[i]= '3';
        }else if(arreglo[i] == letra5){
            arreglo[i]= '4';
        }else if(arreglo[i] == letra6){
            arreglo[i]= '5';
        }else if(arreglo[i] == letra7){
            arreglo[i]= '6';
        }else if(arreglo[i] == letra8){
            arreglo[i]= '7';
        }else if(arreglo[i] == letra9){
            arreglo[i]= '8';
        }else if(arreglo[i] == letra10){
            arreglo[i]= '9';
        }else{
            arreglo[i]==arreglo[i];
        }
    }  

}

//Imprime el arreglo codificado
void imprimir (char arreglo[], int n){
    for(int i=0;i<n;i++){
        cout<<arreglo[i];
    }
    cout<<endl;
    //cout<<" _________________________________________________"<<endl;
}


int main(){
    char cadena[30];
    int tamano, eleccion;

    nombre();
    do{
        llenado(cadena);
        tamano = Longitud(cadena);
        codificar(cadena,tamano);
        imprimir(cadena,tamano);
    }while(eleccion == 1);



    getch();
    return 0;
}