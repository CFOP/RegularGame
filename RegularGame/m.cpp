#include <iostream>
#include<windows.h>
#include <cstdlib>
#include "Jugador.h"
#include "Mapas.h"
#include "main.h"
#include "m.h"

void intro()
{
        system("cls");

        cout << "                ";
        cout << "              _              " << endl;
        cout << "                ";
        cout << "             /_              " << endl;
        cout << "                ";
        cout << "_            )_(            _" << endl;
        cout << "                ";
        cout << "|`-.___,.-~'`|=|`'~-.,___,-'|" << endl;
        cout << "                ";
        cout << "|  __________|=|__________  |" << endl;
        cout << "                ";
        cout << "| |          |=|          | |" << endl;
        cout << "                ";
        cout << "| |          |=|          | |" << endl;
        cout << "                ";
        cout << "| |          |=|          | |" << endl;
        cout << "                ";
        cout << "| |         _|_|_         | |" << endl;
        cout << "                ";
        cout << "| |        |_____|        | |" << endl;
        cout << "                ";
        cout << "| |         | | |         | |" << endl;
        cout << "                ";
        cout << "| |         | | |         / /" << endl;
        cout << "                ";
        cout << " | |        | | |        / / " << endl;
        cout << "                ";
        cout << "  | |       | | |       / /  " << endl;
        cout << "                ";
        cout << "   `.`.     | | |     ,','   " << endl;
        cout << "                ";
        cout << "     `.`.   | | |   ,','     " << endl;
        cout << "                ";
        cout << "       `.`-.  | /,-','       " << endl;
        cout << "                ";
        cout << "         `-.  V  ,-'         " << endl;

        cin.get();
        system("cls");
        cout << endl;
        cout << " #######  #######  #####   #     # #          ###    #######  " << endl;
        cout << " #     ## #       #    ##  #     # #         ## ##   #     ## " << endl;
        cout << " #     ## #       #        #     # #        ##   ##  #     ## " << endl;
        cout << " #######  #####   #   #### #     # #       ##     ## #######  " << endl;
        cout << " #   ##   #       #    ##  #     # #       ######### #   ##   " << endl;
        cout << " #    ##  #       #    ##  #     # #       ##     ## #    ##  " << endl;
        cout << " #     ## #######  #####    #####  ####### ##     ## #     ## " << endl<<endl<<endl<<endl;

        cout << "             ######      ###    ##     ## ########" << endl;
        cout << "            ##    ##    ## ##   ###   ### ##      " << endl;
        cout << "            ##         ##   ##  #### #### ##      " << endl;
        cout << "            ##   #### ##     ## ## ### ## ######  " << endl;
        cout << "            ##    ##  ######### ##     ## ##      " << endl;
        cout << "            ##    ##  ##     ## ##     ## ##      " << endl;
        cout << "             ######   ##     ## ##     ## ########" << endl;

}

void menu(){

    char tecla;

        system("cls");
        cin.clear();


        cout << "  db   d888888b  .d88b.    d8888b. db       .d8b.  db    db " << endl;
        cout << " o88   `~~88~~' .8P  Y8.   88  `8D 88      d8' `8b `8b  d8' " << endl;
        cout << "  88      88    88    88   88oodD' 88      88ooo88  `8bd8'  " << endl;
        cout << "  88      88    88    88   88~~~   88      88~~~88    88    " << endl;
        cout << "  88      88    `8b  d8'   88      88booo. 88   88    88    " << endl;
        cout << "  VP      YP     `Y88P'    88      Y88888P YP   YP    YP    " << endl<<endl<<endl<<endl;

        cout << ".d888b.   db   db d88888b db      d8888b. " << endl;
        cout << "VP  `8D   88   88 88'     88      88  `8D " << endl;
        cout << "   odD'   88ooo88 88ooooo 88      88oodD' " << endl;
        cout << " .88'     88~~~88 88~~~~~ 88      88~~~   " << endl;
        cout << "j88.      88   88 88.     88booo. 88      " << endl;
        cout << "888888D   YP   YP Y88888P Y88888P 88      " << endl<<endl;


        cout << "-----------"  << endl;

        cin >> tecla;

		switch(tecla)
		{
			case '1':
				system("cls");
                   jugar();

				break;

			case '2':
				system("cls");
				cout<<"TE MUEVES CON ASDW\n";
				cout<<"X= JUGADOR\n";
				cout<<"><^v= LANZADORES\n";
				cout<<"li*o=PROYECTILES\n";
				cout<<"MN= CABALLEROS\n";
				cout<<"#= PAREDES\n";
				cout<<"Y,L,I= LLAVES\n";
				cout<<"%=PUERTAS BLOQUEADAS\n";
				cout<<"1,2,3,4,5,6,7,8,9=PUERTAS DESBLOQUEADAS\n";
				cout<<"S= ARMA\n";
				cout<<"O= FANTASMA\n";
				cout<<"F= ???\n\n\n";
				cout<<"-----------\n";
                system("pause");
				menu();


			case '3':
				system("cls");
				cout << "Desarrolladores:\n\n";
				cout<<"Jesus Gerardo Aleman Aguilar\n\n";
				cout<<"Armando Elim Martinez Armendariz\n\n";
				cout<<"Gilberto Turrubiartes\n\n";
				cout<<"Maestro: Victor Yoguel \n\n";
                system("pause");
                menu();

			default:
				system("cls");
				cout << "Opcion no valida.\a\n";
				system("pause");
				menu();

		}
}

