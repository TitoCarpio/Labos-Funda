#include "iostream"

using namespace std;

int main(){

    float num1, num2, num3;
    

    cout<<endl;
    cout<<" _________________________________________"<<endl;
    cout<<"| INGRESE LOS DATOS QUE DESEA PROMEDIAR : |"<<endl;
    cout<<"|_________________________________________|"<<endl<<endl;

    cin>>num1>>num2>>num3;
    float promedio = (num1 + num2 + num3) / 3;
    cout<<endl;
    
    //favor de ingresar 5,7 y 8 para que tenga las dimensiones correctas para el marco

    cout<<"****************************************"<<endl;
    cout<<"* El promedio obtenido es: "<<promedio<<"     *"<<endl;
    cout<<"****************************************";

    
}