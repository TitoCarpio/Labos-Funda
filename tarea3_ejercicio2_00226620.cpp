#include "iostream"

using namespace std;

int main(){

    float pi = 3.1416;
    float rad;


    // Titulo y solicitud de datos
    cout <<endl<<endl;
    cout<<" _________________________________________________"<<endl;
    cout<<"|  CALCULADORA DE AREA Y PERIMETRO DE UN CIRCULO  |"<<endl;
    cout<<"|_________________________________________________|"<<endl<<endl;
    cout<< "-Ingrese el valor del radio de su circunferencia: ";
    cin>>rad;
    cout<<endl;

    // calculo de operaciones de area y de perimetro
    float area = pi * (rad * rad);
    float promedio = (2* pi) * rad;

    //presentacion de resultados
    cout<<"Los resultados obtenidos son los siguientes: "<<endl<<endl;
    cout<<"  -AREA: "<<area<<endl;
    cout<<"  -Perimetro: "<<promedio;
    cout<<endl<<endl;
    cout<<"  Espero regreses pronto!!"<<endl<<endl;

}
