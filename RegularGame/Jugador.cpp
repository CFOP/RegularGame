#include<iostream>
#include<windows.h>
#include "Mapas.h"
//#include "main.h"

using namespace std;

bool gokuAh = 0;

int superSaiyan(){
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
