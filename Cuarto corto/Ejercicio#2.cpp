#include <iostream>
#include <conio.h>

using namespace std;

void nombre(){
    cout<<endl;
    cout<<" _________________________________________________"<<endl;
    cout<<"|                                                 |"<<endl;
    cout<<"|              PROMEDIO DE ESTATURAS.             |"<<endl;
    cout<<"|_________________________________________________|"<<endl<<endl;
}
void llenado(float array[]){
    cout<<"\tIngrese las estaturas de los alumnos"<<endl;
    for(int i=0; i<25;i++){
        cout<<"\tAlumno "<<i+1<<": ";
        cin>>array[i];
        
    }

}

float media(float array[]){
    float auxiliar = 0, prom;

    for(int i=0;i<25;i++){
        auxiliar += array[i];
    }

    prom = auxiliar/25;
    return prom;
}

float conteo(float array[], float prom){
    float contador=0;
    for(int i=0;i<25;i++){
        float auxiliar = array[i];
        if(auxiliar<prom){
            contador++;
        }
    }

    return contador;
}

void imprimir(int cont){
    cout<<"\tHay "<<cont <<" estaturas\n ";
    cout<<"\tpor debajo de la media."<<endl<<endl;
    cout<<"\tHay "<<25-cont<<" estaturas \n";
    cout<<"\tpor encima de la media."<<endl<<endl;
}

int main(){

    float estaturas[25],promedio, contador;


    nombre();
    llenado(estaturas);
    cout<<" _________________________________________________"<<endl;
    promedio = media(estaturas);
    cout<<"\tEl promedio es de: "<<promedio<<endl;
    cout<<" _________________________________________________"<<endl;
    contador = conteo(estaturas, promedio);
    imprimir(contador);
    

    getch();
    return 0;

}