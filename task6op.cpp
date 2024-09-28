#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy (int x , int y);

int main()
{
    system("cls");
    gotoxy(0,1);
    cout<<"H";
    gotoxy(0,2);
    cout<<"A";
    gotoxy(0,3);
    cout<<"S";
    gotoxy(0,4);
    cout<<"S";
    gotoxy(0,5);
    cout<<"A";
    gotoxy(0,6);
    cout<<"N";
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}