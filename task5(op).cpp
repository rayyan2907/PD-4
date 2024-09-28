#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x , int y);

int main()
{
    system("cls");
    gotoxy(15,15);
    cout<<"My name is Rayyan";
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}