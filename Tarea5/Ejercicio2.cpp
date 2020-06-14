#include <iostream>
#include <conio.h>
#include <time.h>


using namespace std;

int Hora(){
    int hora;
//declaracion de variable de time.h
    time_t now = time(0);
    struct tm horas = *localtime(&now);

//codigo que obtiene la hora del sistema
    hora = horas.tm_hour; 
    return hora;

}

int Min(){
    int minutos;
//declaracion de variable de time.h
    time_t now = time(0);
    struct tm horas = *localtime(&now);

//codigo que obtiene los minutos de la hora del sistema
    minutos = horas.tm_min; 
    return minutos;

}

int Segundos(){
    int segundo;
//declaracion de variable de time.h
    time_t now = time(0);
    struct tm horas = *localtime(&now);

//codigo que obtiene los segundos de la hora del sistema
    segundo = horas.tm_sec; 
    return segundo;

}

int SumarS(int h, int m, int s){
    int hor,min,seg;
    hor = h;
    min = m;
    seg = s;

    seg++;
    if(seg==60){
        seg = 00;
        min++;
        if(min==60){
            min = 00;
            hor++;}
            if(hor == 25){
            hor = 00;
            cout<<" La hora al sumarle un segundo es: "<<hor<<":"<<min<<":"<<seg<<endl;
            } 
    
    }else {
        cout<<" La hora al sumarle un segundo es: "<<hor<<":"<<min<<":"<<seg<<endl;
    }
}


int main(){
    int hora,minutos,segundos;

    cout<<endl;
    cout<<" ____________________________________________"<<endl;
    cout<<"|                                            |"<<endl;
    cout<<"|             HORA DEL SISTEMA +1s           | "<<endl;
    cout<<"|____________________________________________|"<<endl<<endl;

    hora = Hora();
    minutos = Min();
    segundos = Segundos();

    SumarS(hora, minutos, segundos);
    getch();
    return 0;
}