#include<iostream>
using namespace std;
void checkspeed(int);

main()
{
    int speed;
    cout<<"Enter your speed : ";
    cin>>speed;
    checkspeed(speed);

}

void checkspeed(int speed)
{
    if (speed > 100)
        cout<<"Halt.. YOU WILL BE CHALLANED!!!";
    else 
        cout<<"Perfect! You're going good.";
}