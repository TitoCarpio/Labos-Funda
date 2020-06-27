#include <iostream>
#include <conio.h>

using namespace std;

// Despliega el titulo del programa

void nombre(){
    cout<<endl;
    cout<<" _________________________________________________"<<endl;
    cout<<"|                                                 |"<<endl;
    cout<<"|              PROMEDIO DE ESTATURAS.             |"<<endl;
    cout<<"|_________________________________________________|"<<endl<<endl;
}

// Funcion con la que se llena el arreglo con las estaturas
void llenado(float array[]){
    cout<<"\tIngrese las estaturas de los alumnos"<<endl;
    for(int i=0; i<25;i++){
        cout<<"\tAlumno "<<i+1<<": ";
        cin>>array[i];
        
    }

}

// Funcion que realiza el calculo de la media o promedio
float media(float array[]){
    float auxiliar = 0, prom;

    for(int i=0;i<25;i++){
        auxiliar += array[i];
    }

    prom = auxiliar/25;
    return prom;
}

/* Funcion que realiza el conteo de cuantos valores se encuentras bajo de la media
 * y por encima de la media*/
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

// Funcion que despliega el resulado del codigo en pantalla
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