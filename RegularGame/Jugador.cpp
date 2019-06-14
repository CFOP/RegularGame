#include<iostream>
#include<windows.h>
#include "Mapas.h"
#include "main.h"


bool gokuAh = 0;

int superSaiyan(){
    if(isOnS()==1) gokuAh = 1;
    else if (enemigo()==1){
        gokuAh = 0;
    }
    return gokuAh;
}

int isKeyDown(char a) {
    return GetKeyState(a)<0;
}

int jugador()
{
    if(isKeyDown('W') || isKeyDown('S') || isKeyDown('D') ||isKeyDown('A'))
    {
        if(isKeyDown('S')) //abajo
        {
            jugD();
            while(isKeyDown('S'));
        }
        else if(isKeyDown('W'))//arriba
        {
            jugU();
            while(isKeyDown('W'));
        }
        else if(isKeyDown('D'))//derecha
        {
            jugR();
            while(isKeyDown('D'));
        }
        else if(isKeyDown('A'))//izquierda
        {
            jugL();
            while(isKeyDown('A'));
        }
        showMap();
    }
}
