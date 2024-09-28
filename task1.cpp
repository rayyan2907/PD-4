#include<iostream>
using namespace std ;
void function(int , int);
main()
{
    int n1,n2;
    cout<<"Enter first number : ";
    cin>>n1;
    cout<<"Enter second number : ";
    cin>>n2;
    function(n1,n2);

}

void function (int n1, int n2)
{
    if (n1==n2)
        cout<<"true";
    else 
        cout<<"false";
}