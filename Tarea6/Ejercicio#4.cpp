#include <iostream>
#include <conio.h>

using namespace std;

void nombre(){
    cout<<endl;
    cout<<" _________________________________________________"<<endl;
    cout<<"|                                                 |"<<endl;
    cout<<"|                 SUMA DE ARRAYS                  |"<<endl;
    cout<<"|_________________________________________________|"<<endl<<endl;

}

int DArreglo1(){
    int n1;
    cout<<"\tIngrese la longitud de su arreglo 1: ";
    cin>>n1;
    cout<<endl;

    return n1;
}

int DArreglo2(){
    int n1;
    cout<<"\tIngrese la longitud de su arreglo 2: ";
    cin>>n1;
    cout<<endl;

    return n1;
}

int validar(int n1, int n2){
    int valor;

    if(n1 == n2){
        valor = 1;
    }else{
        valor =2;
    } 

    return valor;

}

void Arreglo1( float array[], int n){

    cout<<"\tValores para el arreglo 1"<<endl;

    for(int i=0; i < n; i++){
        cout<<"\tIngrese el valor "<< i+1<<": ";
        cin>>array[i];
    }
}

void Arreglo2( float array[], int n){

    cout<<"\tValores para el arreglo 2"<<endl;

    for(int i=0; i < n; i++){
        cout<<"\tIngrese el valor "<< i+1<<": ";
        cin>>array[i];
    }
}

/* esta funcion solo recibe un tamano de longitud
 * debido a que comparamos que los rreglos sean de la misma longitud*/
void sumar(float array1[], float array2[], int n){

    int n1 = n;
    float sumaArrays[n1];
    cout<<" _________________________________________________"<<endl;
    cout<<"\tLa suma de los elementos ubicadosen la misma \n\tposicion es:"<<endl;
    for(int i = 0;i<n1;i++ ){
        sumaArrays[i] = array1[i] + array2[i];
        cout<<"\t"<<sumaArrays[i]<<" ";
    }
}




int main(){

    nombre();

    int n1, n2, validacion;


    n1 = DArreglo1();
    n2 = DArreglo2();
    validacion = validar(n1,n2);

    float array1 [n1];
    float array2 [n2];

    if(validacion == 1){
        cout<<" _________________________________________________"<<endl;
        Arreglo1(array1, n1);
        cout<<" _________________________________________________"<<endl;
        Arreglo2(array2, n2);
        sumar(array1, array2, n1);
    }else {
        cout<<" _________________________________________________"<<endl;
        cout<<"\tLas longitudes no son iguales."<<endl;
    }
    
    
    
   

    
    




    getch();
    return 0;
}
