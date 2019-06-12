#include <iostream>
#include<windows.h>
#include "Jugador.h"
#include "Mapas.h"
//#include "main.h"
using namespace std;


int gameOver(){
    system("cls");
    cout<<"GameOver \n";
    system ("pause");
    exit(-1);
}

int main()
{
    showMap();
    while(true)
    {
        jugador();
    }
}
