#include <iostream>
#include<windows.h>
#include "Jugador.h"
#include "Mapas.h"

using namespace std;


int main()
{
    showMap();
    while(true)
    {
        jugador();
        showMap();
    }
}
