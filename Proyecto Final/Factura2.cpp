#include <iostream>
#include <conio.h>

using namespace std;

const int longCad = 20;

struct costoPorArticulo{
    char nombreArticulo[longCad +1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};

// funcion que despliega el titulo del Programa
void Titulo(){
    cout<<endl;
    cout<<" ___________________________________________________________________"<<endl;
    cout<<"|                                                                   |"<<endl;
    cout<<"|                        ARTICULOS A COMPRAR                        |"<<endl;
    cout<<"|___________________________________________________________________|"<<endl<<endl;
}

// fncion con la que solicitamos la cantidad de productos a procesar
int cantidad(){
    int n;
    cout<<"\tIndique la cantidad de articlos a comprar:";
    cin>>n;
    cout<<" ___________________________________________________________________"<<endl;
    cout<<endl;

    return n;
}

// funcion con las que llenamos el arreglo con los datos solicitados
void lecturaDeDatos(costoPorArticulo array[], int n){
    int i=0;

    while(i < n){
        //poner linea de titulo.
        cout<<"\t+Ingrese el nombre del producto "<<i+1<<":";
        cin>>array[i].nombreArticulo;
        cout<<"\tCantidad a comprar:";
        cin>>array[i].cantidad;
        cout<<"\tPrecio:";
        cin>>array[i].precio;
        i++;
        cout<<endl;
    }

}

// funcion con la que se calcula el costo por articulo
void costoArticulo(costoPorArticulo array[], int n){
    int i=0;
    float costo;
    while(i<n){
        costo = array[i].cantidad * array[i].precio;
        array[i].costoPorArticulo = costo;
        i++;
    }
}

// funcion con la que se despliegan los datos del arreglo en un formato de factura
void factura(costoPorArticulo array[], int n){
    int i=0;
    cout<<" ___________________________________________________________________"<<endl;
    cout<<"|                              FACTURA                              |"<<endl;
    cout<<"|___________________________________________________________________|"<<endl;
    cout<<"Producto      Cant                 Precio/U            Precio Total"<<endl;
    cout<<"_____________________________________________________________________"<<endl;
    while(i<n){
        cout<<array[i].nombreArticulo;
        cout<<"\t\t"<<array[i].cantidad;
        cout<<"\t\t\t"<<array[i].precio;
        cout<<"\t\t\t"<<array[i].costoPorArticulo;
        i++;
        cout<<endl;
    }
}

// funcion que calcula el precio total que debera pagar el cliente por su compra
float costoTotal(costoPorArticulo array[], int n){
    int i=0;
    float costo;
    while(i<n){
        costo += array[i].costoPorArticulo;
        i++;
    }
    return costo;
}

int main(){
    Titulo();
    int n;
    float costoT;
    n = cantidad();
    costoPorArticulo lista [n];

    lecturaDeDatos(lista , n);
    costoArticulo(lista ,n);
    factura(lista, n);
    costoT = costoTotal(lista, n);

    cout<<"______________________________________________________________________"<<endl;
    cout<<"|Costo Total";
    cout<<"\t\t\t\t\t\t\t$"<<costoT<<"|";
    cout<<endl<<endl;

    getch();
    return 0;
}