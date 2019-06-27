#include <iostream>
#include<windows.h>
#include <cstdlib>
#include "Jugador.h"
#include "Mapas.h"
#include "main.h"
#include "m.h"

char tecla;


int gameOver(){


    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n";


    cout << " ######      ###    ##     ## ########   #######  ##     ## ######## ########  " << endl;
    cout << "##    ##    ## ##   ###   ### ##        ##     ## ##     ## ##       ##     ## " << endl;
    cout << "##         ##   ##  #### #### ##        ##     ## ##     ## ##       ##     ## " << endl;
    cout << "##   #### ##     ## ## ### ## ######    ##     ## ##     ## ######   ########  " << endl;
    cout << "##    ##  ######### ##     ## ##        ##     ##  ##   ##  ##       ##   ##   " << endl;
    cout << "##    ##  ##     ## ##     ## ##        ##     ##   ## ##   ##       ##    ##  " << endl;
    cout << " ######   ##     ## ##     ## ########   #######     ###    ######## ##     ## " << endl<< endl<< endl<< endl;

    system("pause");
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n";
    cout << " ######      ###    ##     ## ########   #######  ##     ## ######## ########  " << endl;
    cout << "##    ##    ## ##   ###   ### ##        ##     ## ##     ## ##       ##     ## " << endl;
    cout << "##         ##   ##  #### #### ##        ##     ## ##     ## ##       ##     ## " << endl;
    cout << "##   #### ##     ## ## ### ## ######    ##     ## ##     ## ######   ########  " << endl;
    cout << "##    ##  ######### ##     ## ##        ##     ##  ##   ##  ##       ##   ##   " << endl;
    cout << "##    ##  ##     ## ##     ## ##        ##     ##   ## ##   ##       ##    ##  " << endl;
    cout << " ######   ##     ## ##     ## ########   #######     ###    ######## ##     ## " << endl<< endl<< endl<< endl;

    cout<<"\n";
    cout<<"                              ";
    cout<<"1 .- Intentar Otra Vez"<<"\n\n";
    cout<<"                              ";
    cout<<"2 .- Rendirse"<<"\n\n";
    cout<<"                              ";

    cin.clear();
    cin >> tecla;

    switch(tecla)
    {
        case '1':
            system("cls");
                jugar();

        break;

        case '2':
            exit(-1);
        break;

        default:
            system("cls");
            cout << "Opcion no valida.\a\n";
            system("pause");
            menu();
		}

}
void jugar()
{

    checarPos();
    showMap();
    while(true)
    {
        jugador();
    }
}

int main()
{
    intro();
    cin.get();
    menu();
}


