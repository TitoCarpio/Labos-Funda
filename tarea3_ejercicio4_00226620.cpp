#include "iostream"

using namespace std;

int main(){
    string producto;
 
    float cant, precio;

    cout<<" __________________________________________"<<endl;
    cout<<"|       BIENVENIDO A SUPER SELECTOS        |"<<endl;
    cout<<"|__________________________________________|"<<endl<<endl;

    //solicitude de datos
    cout<<"             Factura # 2365478             "<<endl<<endl;
    cout<<"  -Producto: ";
    cin>>producto;
    cout<<"  -Precio: $";
    cin>>precio;
    cout<<"  -Cantidad: ";
    cin>>cant;
    cout<<endl;

    //mostrar cantidad a pagar 
    float dinero = cant * precio;
    cout<<" El precio a pagar por "<<cant<<" "<<producto<<" es de $"<<dinero<<endl<<endl;
    cout<<"        EL SUPER DE LOS SALVADORENOS"<<endl<<endl;
}