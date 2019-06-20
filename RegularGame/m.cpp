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
        cin.clear();





        cout << "#####  #### #####   #   # #        #    #####     #####      #    #     # #####" << endl;
        cout << "#    # #    #    #  #   # #       # #   #    #   #    #     # #   ##   ## #    " << endl;
        cout << "#    # #    #       #   # #      #   #  #    #   #         #   #  ### ### #    " << endl;
        cout << "###### ##   #   ##  #   # #     #     # ######   #   ##   #     # # ### # ###  " << endl;
        cout << "# #    #    #    #  #   # #     ####### #   #    #    #   ####### #     # #    " << endl;
        cout << "#   #  #    #    #  #   # #     #     # #    #   #    #   #     # #     # #    " << endl;
        cout << "#    # ####  ####   #####  #### #     # #     #   #####   #     # #     # #####" << endl<<endl<<endl<<endl;


        cout << "                       ";
        cout << "              _              " << endl;
        cout << "                       ";
        cout << "             /_              " << endl;
        cout << "                       ";
        cout << "_            )_(            _" << endl;
        cout << "                       ";
        cout << "|`-.___,.-~'`|=|`'~-.,___,-'|" << endl;
        cout << "                       ";
        cout << "|  __________|=|__________  |" << endl;
        cout << "                       ";
        cout << "| |          |=|          | |" << endl;
        cout << "                       ";
        cout << "| |          |=|          | |" << endl;
        cout << "                       ";
        cout << "| |          |=|          | |" << endl;
        cout << "                       ";
        cout << "| |         _|_|_         | |" << endl;
        cout << "                       ";
        cout << "| |        |_____|        | |" << endl;
        cout << "                       ";
        cout << "| |         | | |         | |" << endl;
        cout << "                       ";
        cout << "| |         | | |         | |" << endl;
        cout << "                       ";
        cout << "| |         | | |         | |" << endl;
        cout << "                       ";
        cout << "| |         | | |         | |" << endl;
        cout << "                       ";
        cout << "| |         | | |         | |" << endl;
        cout << "                       ";
        cout << "| |         | | |         | |" << endl;
        cout << "                       ";
        cout << "| |         | | |         | |" << endl;
        cout << "                       ";
        cout << "| |         | | |         | |" << endl;
        cout << "                       ";
        cout << "| |         | | |         | |" << endl;
        cout << "                       ";
        cout << "| |         | | |         / /" << endl;
        cout << "                       ";
        cout << " | |        | | |        / / " << endl;
        cout << "                       ";
        cout << "  | |       | | |       / /  " << endl;
        cout << "                       ";
        cout << "   `.`.     | | |     ,','   " << endl;
        cout << "                       ";
        cout << "     `.`.   | | |   ,','     " << endl;
        cout << "                       ";
        cout << "       `.`-.| | |,-','       " << endl;
        cout << "                       ";
        cout << "         `-.| | |,-'         " << endl;
        cout << "                       ";
        cout << "            | | |            " << endl;
        cout << "                       ";
        cout << "            | | |            " << endl;
        cout << "                       ";
        cout << "            | | |            " << endl;
        cout << "                       ";
        cout << "            | | |            " << endl;
        cout << "                       ";
        cout << "              | /            " << endl;
        cout << "                       ";
        cout << "              V              " << endl;


}

void menu(){

    char tecla;

        system("cls");
        cin.clear();


        cout << "#####  #### #####   #   # #        #    #####     #####      #    #     # #####" << endl;
        cout << "#    # #    #    #  #   # #       # #   #    #   #    #     # #   ##   ## #    " << endl;
        cout << "#    # #    #       #   # #      #   #  #    #   #         #   #  ### ### #    " << endl;
        cout << "###### ##   #   ##  #   # #     #     # ######   #   ##   #     # # ### # ###  " << endl;
        cout << "# #    #    #    #  #   # #     ####### #   #    #    #   ####### #     # #    " << endl;
        cout << "#   #  #    #    #  #   # #     #     # #    #   #    #   #     # #     # #    " << endl;
        cout << "#    # ####  ####   #####  #### #     # #     #   #####   #     # #     # #####" << endl<<endl<<endl<<endl;


        cout << "   ##                     ## ##     ##  ######      ###    ########  " << endl;
        cout << " ####                     ## ##     ## ##    ##    ## ##   ##     ## " << endl;
        cout << "   ##                     ## ##     ## ##         ##   ##  ##     ## " << endl;
        cout << "   ##       #######       ## ##     ## ##   #### ##     ## ######## " << endl;
        cout << "   ##               ##    ## ##     ## ##    ##  ######### ##   ##  " << endl;
        cout << "   ##   ###         ##    ## ##     ## ##    ##  ##     ## ##    ## " << endl;
        cout << " ###### ###          ######   #######   ######   ##     ## ##     ##" << endl<<endl<<endl<<endl;

        cout << " #######                 ###    ##    ## ##     ## ########     ###    " << endl;
        cout << "##     ##               ## ##    ##  ##  ##     ## ##     ##   ## ##   " << endl;
        cout << "       ##              ##   ##    ####   ##     ## ##     ##  ##   ##  " << endl;
        cout << " #######      ####### ##     ##    ##    ##     ## ##     ## ##     ## " << endl;
        cout << "##                    #########    ##    ##     ## ##     ## ######### " << endl;
        cout << "##        ###         ##     ##    ##    ##     ## ##     ## ##     ## " << endl;
        cout << "######### ###         ##     ##    ##     #######  ########  ##     ## " << endl<<endl<<endl<<endl;

        cout << " #######            ###### ########  ###### #######  ### ######  #####   ##### " << endl;
        cout << "       #           #     # #     ##  #      #     ## #     #    #     # #      " << endl;
        cout << "       #           #       #     ##  #      #     ## #     #    #     # #      " << endl;
        cout << " #######    ####   #       #######   ###    #     ## #     #    #     #  ##### " << endl;
        cout << "       #           #       #   ##    #      #     ## #     #    #     #       #" << endl;
        cout << "       # ###       #     # #    ##   #      #     ## #     #    #     #       #" << endl;
        cout << " ####### ###        ###### ##     ## ###### #######  ###   #     #####   ##### " << endl<<endl<<endl<<endl;

        cout << "-----------" << endl << endl;

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
				cout<<"><^v= Torreta\n";
				cout<<"MN= Slimes\n";
				cout<<"#= Pared\n";
				cout<<"Y,L,I= Llaves\n";
				cout<<"S= Poder\n";
				cout<<"O= Boo\n";
				cout<<"F=???\n";
				cout<<"Torreta>Boo\n";
                pausa();
				menu();


			case '3':
				system("cls");
				cout << "Desarrolladores:\n\n";
				cout<<"Jesus Gerardo Aleman Aguilar\n\n";
				cout<<"Armando Elim Martinez Armendariz\n\n";
				cout<<"Gilberto Turrubiartes\n\n";
				cout<<"Maestro: Victor Yoguel \n\n";
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
    cout << "Pulsa una tecla para regresar...";
    getwchar();
    getwchar();
}
