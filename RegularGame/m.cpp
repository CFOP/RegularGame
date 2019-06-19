#include <iostream>
#include<windows.h>
#include <cstdlib>
#include "Jugador.h"
#include "Mapas.h"
#include "main.h"
#include "m.h"


void menu(){

    char tecla;

        system("cls");
        cin.clear();
        cout << "Regular Game" << endl;
        cout << "-----------" << endl << endl;
        cout << "\t1 .- Jugar" << endl;
        cout << "\t2 .- Ayuda" << endl;
        cout << "\t3 .- Creditos" << endl << endl;
        cout << "Elije una opcion: ";

        cin >> tecla;

		switch(tecla)
		{
			case '1':
				system("cls");
                   jugar();

				break;

			case '2':
				system("cls");
				cout<<"X= Jugador\n";
				cout<<"><^v= shooter\n";
				cout<<"M= mov. horizontal\n";
				cout<<"N= mov. Vertical\n";
				cout<<"#= pared\n";
				cout<<"k= llave\n";
				cout<<"s= poder\n";
				cout<<"f=???\n";
				cout<<"O= Stalker\n";
                pausa();
				menu();


			case '3':
				system("cls");
				cout << "Hecho por:\n";
				cout<<"Jesus\n";
				cout<<"Elim\n";
				cout<<"Gil\n";
				cout<<"Maestro: Victor\n";
                pausa();
                menu();

			default:
				system("cls");
				cout << "Opcion no valida.\a\n";
				pausa();
				menu();

		}
}
void pausa()
{
    cout << "Pulsa una tecla para continuar...";
    getwchar();
    getwchar();
}
