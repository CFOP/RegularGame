#include<iostream>
#include<windows.h>

using namespace std;


char m[2][15][15] =
    {
        {
            {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
            {'#', 'o','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','#'},
            {'#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#'},
            {'#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#'},
            {'#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#'},
            {'#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#'},
            {'#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#'},
            {'#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#'},
            {'#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#'},
            {'#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#'},
            {'#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#'},
            {'#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#'},
            {'#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#'},
            {'#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#'},
            {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}

        }
    };


int mundoActual=0;

int JugX=1, JugY=1;




void showMap()
{
    system("cls");
    for(int i=0; i<15; i++){
        for(int j=0; j<15; j++){
            cout<<m[mundoActual][i][j];
        }
        cout<<"\n";
    }
}




void jugD()
{
    if(m[mundoActual][JugY+1][JugX]=='*')
    {
        m[mundoActual][JugY][JugX] = '*';
        JugY++;
        /*if(m[mundoActual][y][x]=='2')
        {
            turno();
            mundoActual = 1;
            x = y = 0;
        }*/
        m[mundoActual][JugY][JugX] = 'o';
    }
}
void jugU()
{
    if(m[mundoActual][JugY-1][JugX]=='*')
    {
        m[mundoActual][JugY][JugX] = '*';
        JugY--;
        /*if(m[mundoActual][y][x]=='2')
        {
            turno();
            mundoActual = 1;
            x = y = 0;
        }*/
        m[mundoActual][JugY][JugX] = 'o';
    }

}
void jugR()
{
    if(m[mundoActual][JugY][JugX+1]=='*')
    {
        m[mundoActual][JugY][JugX] = '*';
        JugX++;
        /*if(m[mundoActual][y][x]=='2')
        {
            turno();
            mundoActual = 1;
            x = y = 0;
        }*/
        m[mundoActual][JugY][JugX] = 'o';
    }

}
void jugL()
{
    if(m[mundoActual][JugY][JugX-1]=='*')
    {
        m[mundoActual][JugY][JugX] = '*';
        JugX--;
        /*if(m[mundoActual][y][x]=='2')
        {
            turno();
            mundoActual = 1;
            x = y = 0;
        }*/
        m[mundoActual][JugY][JugX] = 'o';
    }

}

