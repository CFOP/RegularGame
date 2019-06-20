#include <iostream>
#include<windows.h>
#include "Jugador.h"
#include "Mapas.h"
#include "main.h"


int gameOver(){
    system("cls");
    cout<<"GameOver \n";
    system ("pause");
    exit(-1);
}

int main()
{
    checarPos();
    showMap();
    while(true)
    {
        jugador();
    }
}
