#include "iostream"
#include "cmath"

using namespace std;

int main(void){

    float a, b, c;
 


//Solicitar los valores de a, b y ce de la funcion al usuario.
    cout<<" _______________________________________________"<<endl;
    cout<<"| INGRESE LOS VALORES DE LAS VARIABLES a, b y c |"<<endl;
    cout<<"|           DE SU ECUACION CUADRATICA.          | "<<endl;
    cout<<"|_______________________________________________|"<<endl<<endl;

//Llenado de valores por parte del usuario
    cout<<"    a= ";
    cin>>a;
    cout<<"    b= ";
    cin>>b;
    cout<<"    c= ";
    cin>>c;


// complementos para usarlos en la formula
 
    int negacion = -1*b;
    float b_elevada = pow(b,2);
    float mult = 4 *a *c;
    int resta = b_elevada - mult;
    float raiz = sqrt(resta);
    int mult_dos = 2 * a;
   
//Obtencion del conjunto solucion   
    float x_uno = (negacion + raiz) / mult_dos;
   
    float x_dos = (negacion - raiz) / mult_dos;

//impresion del conjunto solucion

    cout<<"    El conjunto solucion para su ecuacion es:\n    { "<<x_uno<<", "<<x_dos<<"}"<<endl<<endl;


}