#include <iostream>
#include<windows.h>
#include <cstdlib>
#include "Jugador.h"
#include "Mapas.h"
#include "main.h"
#include "m.h"

int gameOver(){
    system("cls");
    cout<<"GameOver \n";
    system ("pause");
    exit(-1);
}
void jugar(){

checarPos();
    showMap();
    while(true)
    {
        jugador();
    }
}

int main()
{
    menu();
}


