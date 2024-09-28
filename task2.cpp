#include<iostream>
using namespace std;
void function(string);
main()
{
    string n;
    cout<<"Enter true or false : ";
    cin>>n;
    function(n);

}
void function(string n)
{
    if ( n == "true")
        cout<<"False";
    else 
        cout<<"True";
        
}