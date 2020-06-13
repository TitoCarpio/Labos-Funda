#include <iostream>
#include <conio.h>

using namespace std;


float salarioT(){

    float htrabajadas, hextras, salariototal;

    cout<<"\tHoras trabajadas: ";
    cin>>htrabajadas;
    cout<<endl;

    cout<<"\tHoras extras: ";
    cin>>hextras;
    cout<<endl;

    salariototal = (htrabajadas*1.75)+(hextras*2.25);
    return salariototal;  
}

float impuestos(float salario){
    float seguro, afp, renta, impuestoP;
    if(salario >= 500){
        seguro = salario * 0.04;
        afp= salario * 0.0625;
        renta = salario * 0.1;

        impuestoP = salario-(seguro + afp + renta);
    }else{
        impuestoP = 0;
    }
    
    return impuestoP;
}

float opcion(){
    float eleccion, opcion;

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

    float salariot, impuesto, eleccion;

    //nombre del programa
    cout<<" _____________________________________________"<<endl;
    cout<<"|       CALCULO DE SALARIO DE EMPLEADOS       |"<<endl;
    cout<<"|             Coca-Cola company               |"<<endl;
    cout<<"|_____________________________________________|"<<endl<<endl;


    do{
        salariot = salarioT();
        cout<<"\tEl salario total es: $"<<salariot<<endl;

        impuesto = impuestos(salariot);
        cout<<"\tEl salario real es: $"<<impuesto<<endl<<endl;

        eleccion = opcion();


    }while(eleccion == 1);

    getch();
    return 0;
}