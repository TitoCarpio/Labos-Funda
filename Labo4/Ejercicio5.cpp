#include "iostream"
#include "conio.h"
#include "string.h"

using namespace std;

int main(){
    char palabra[30];
    
    int longitud;
    

        cout<<" _________________________________________________"<<endl;
        cout<<"|              CADENAS DE CARACTERES              |"<<endl;
        cout<<"|_________________________________________________|"<<endl<<endl;

        //solicitude de texto al usuario

        cout<<"  Ingrese la palabra a comprobar:"<<endl;
        cin.getline(palabra,30,'\n');

        longitud = strlen(palabra);

        if(palabra[0]==palabra[longitud - 1]){
            cout<<" La primera y ultima letra son iguales"<<endl;
        } else{
            cout<<" La primera y ultima letra son distintas"<<endl;
        }

    


    



    getch();
    return 0;
}