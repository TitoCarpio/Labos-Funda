#include <iostream>
#include <conio.h>

using namespace std;

void nombre(){

    cout<<endl;
    cout<<" ___________________________________________________"<<endl;
    cout<<"|                                                   |"<<endl;
    cout<<"|              NOTAS DE FINAL DE CICLO.             |"<<endl;
    cout<<"|___________________________________________________|"<<endl<<endl;
}

void nalumnos(int *n){
    cout<<"\tCuantos alumnos desea promediar: ";
    cin>>*n;   
}

void nombres(string array[], int n){

    cout<<"\tIngrese los nombres de los alumnos:"<<endl;
    cout<<" ___________________________________________________"<<endl;
    
    for(int i=0;i<n;i++){
        cout<<"\t";
        cin>>array[i];
    }

}



void llenadoMatriz( string array[], float matriz[][5], int num ){

    for(int i=0;i<num;i++){
        cout<<" ___________________________________________________"<<endl;
        cout<<"\tIngrese la notas del alumno "<<array[i]<<":"<<endl;
        for(int j=0;j<5;j++){
            cout<<"\t";
            cin>>matriz[i][j];
        }
    }
   
}

void calculodenota(float matriz[][5], int num){

    
    for(int i=0;i<num;i++){
        for(int j=0;j<5;j++){
            matriz[i][j] *= 0.2;
            
        }
        
    }
}

void notafinal(string array[], float matriz[][5], int num){
    float auxiliar=0;
    for(int i=0;i<num;i++){
        for(int j=0;j<5;j++){
            auxiliar += matriz[i][j];
        }

        cout<<" ___________________________________________________"<<endl;
        cout<<"\tEl alumno "<<array[i]<<" tuvo una nota \n";
            cout<<"\tde "<<auxiliar<<":";
        if(auxiliar <7){
            cout<<"REPROBADO"<<endl;
        }else {
            cout<<"APROBADO"<<endl;
        }
        auxiliar = 0;
    }

}


int main(){

    int num;
    
    nombre();
    nalumnos(&num);

    float notas [num][5];
    string nombre[num];
    
    nombres(nombre,num);
    llenadoMatriz(nombre,notas,num);
    calculodenota(notas,num);
    notafinal(nombre,notas,num);
    
    

    getch();
    return 0;
}