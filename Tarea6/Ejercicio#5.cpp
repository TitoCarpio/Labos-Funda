#include <iostream>
#include <conio.h>

using namespace std;

void nombre(){

    cout<<endl;
    cout<<" _________________________________________________"<<endl;
    cout<<"|                                                 |"<<endl;
    cout<<"|              100 ENTEROS IMPARES --             |"<<endl;
    cout<<"|_________________________________________________|"<<endl<<endl;

}

void rellenado(int impares[], int n ){
    
    int num = 1;

    for(int i=0;i<=n;i++){
        impares[i] = num;
        num+=2;
    }
}

void impresion(int array[], int n){
    int i = n;
    for( i; i>=0;i--){
        cout<<array[i];
        cout<<" ";
    }
}



int main(){

    nombre();
    int n = 99;
    int enterosIm [n];

    rellenado(enterosIm,n);

    impresion(enterosIm,n);

    getch();
    return 0;
}