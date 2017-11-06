//
//  main.cpp
//  Ejercicio03
//
//  Created by faleyk on 11/6/17.
//  Copyright © 2017 faleyk. All rights reserved.
//


#include<iostream>
#include <ctype.h>
#include<stdlib.h>
using namespace std;

int main(){
    int examen,part,tarea,caso;
    float fin;
    cout<<"Inserta la calificación de examen:"<<endl;
    cin>> examen;
    if(examen>10)
    {
        cout<<"Tu calificación no es válida"<<endl;
        exit(0);
    }
    cout<<"Inserta la calificación de participación:"<<endl;
    cin>> part;
    cout<<"Inserta la calificación de tareas:"<<endl;
    cin>> tarea;
    
    if (examen<8) {caso=2;}
    else
    {
        if (tarea==0 and part==0)
            caso=1;
        else if (tarea==0)
            caso=3;
        else if (part==0)
            caso=4;
    }
    switch (caso){
        case 1:
            fin=examen;
            cout<<"La calificación es:"<<fin<< endl;
            break;
        case 2:
            fin=examen;
            cout<<"La calificación es:"<<fin<<endl;
            break;
        case 3:
            fin=examen*0.85+part*0.15;
            cout<<"La calificación es:"<<fin<<endl;
            break;
        case 4:
            fin=examen*0.85+tarea*0.15;
            cout<<"La calificación es:"<<fin<<endl;
            break;
        default:
            cout<<"Opción inválida"<< endl;
            break;
    }
    return 0;
    }
    
