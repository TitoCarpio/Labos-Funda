#include <iostream>
#include <conio.h>

using namespace std;

int evaluar(int day, int month, int year){
    int dia=day, mes=month,ano=year, validacion;

    if(mes >12 || mes < 0 ){
        cout<<"\tLa fecha no es valida."<<endl;
        validacion = 1;
    }else{
        if(dia > 29 && mes ==2){
        cout<<"\tLa fecha no es valida."<<endl;
        validacion = 1;
        } else if (ano < 0){
            cout<<"\tLa fecha no es valida."<<endl;
            validacion = 1;
        }
    }
    return validacion;
}

int calculo(int year){
    int dato = year, prueba;
    
    if(dato % 4 == 0 && dato%100 !=0 || dato % 400 ==0){
        prueba = 1;
    }else {
        prueba =2;
    }

    return prueba;
}

int fecha (int tip, int dia, int mes, int year){
    int day= dia,month = mes, ano = year,tipo = tip;


    if(tipo == 2){
        dia++;
        if(dia==32 && mes ==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 ){
            dia=1;
            mes++;    
        }else if(dia==29 && mes ==2){
            dia=1;
            mes++;
        }else if(dia ==32 && mes ==12){
            dia=1;
            mes=1;
            ano++;
        }
    }else {
        dia++;
        if(dia==32 && mes ==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 ){
            dia=1;
            mes++;    
        }else if(dia==30 && mes ==2){
            dia=1;
            mes++;
        }else if(dia ==32 && mes ==12){
            dia=1;
            mes=1;
            ano++;
        }
    }
    cout<<"\tFecha: "<<dia<<"/"<<mes<<"/"<<ano<<endl;
}

int opcion(){
    int eleccion, opcion;

    cout<<" ____________________________________________"<<endl;
    cout<<"\tOpciones:"<<endl<<"\t1. Continuar"<<endl<<"\t2. Salir"<<endl;
    cin>>opcion;
    cout<<endl; 

    if(opcion == 1){
        eleccion =1;
    }else{
        eleccion = 2;
    }
    return eleccion;
}


int main(){
    int dia, mes, year,validar, tipo,eleccion;

    cout<<endl;
    cout<<" ____________________________________________"<<endl;
    cout<<"|                                            |"<<endl;
    cout<<"|             TU FECHA MAS UN DIA            | "<<endl;
    cout<<"|____________________________________________|"<<endl<<endl;

do{
    cout<<"\tIngresa el dia, mes y a?o:";
    cin>>dia>>mes>>year;
    cout<<endl;
    cout<<" ____________________________________________"<<endl;
    

    validar =evaluar(dia,mes,year);
    eleccion = opcion();
    
    if(validar==0){
        tipo = calculo(year);

        fecha(tipo,dia,mes,year);
        eleccion = opcion();
    }

}while(eleccion == 1);

    getch();
    return 0;
}