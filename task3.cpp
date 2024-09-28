#include<iostream>
using namespace std;
void price(string,float);
main()
{
    string flight;
    float ticket;
    cout<<"Enter the country you want to travel : ";
    cin>>flight;
    cout<<"Enter the ticket price : ";
    cin>>ticket;
    price(flight,ticket);

}

void price (string flight , float ticket)
{
    float total;

    if (flight == "pakistan")
        {
            total=ticket-(ticket*0.05);
        }
    else
        if(flight == "ireland")
        {
            total=ticket-(ticket*0.1);
        }
    else 
        if(flight == "india")
        {
            total=ticket-(ticket*0.2);
        }
    else
        if(flight == "england")
        {
            total=ticket-(ticket*0.3);
        }
    else
        if(flight == "canada")
        { 
            total=ticket-(ticket*0.45);
         }

    cout<<"Final ticket price is : "<<total;
}