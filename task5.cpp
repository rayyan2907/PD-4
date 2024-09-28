#include<iostream>
using namespace std ;
void function (int,int );

main()
{    
	int n1,n2;
	cout<<"Enter your position : ";
	cin>>n1;
	cout<<"Enter your friends number : ";
	cin>>n2;
	function(n1,n2);
}
void function(int n1, int n2)
{
	if ( n2-n1 <= 6)
		cout<<"True";
	else
		cout<<"False";


}