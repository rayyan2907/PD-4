#include<iostream>
using namespace std;
void time(int, int);

main()
{
	int min,hour;
	cout<<"enter minutes : ";
	cin>>min;
	cout<<"enter hours : ";
	cin>>hour;
	
	time(min,hour);

}

void time (int min, int hour)
{
	int convert;
	convert = hour*60;
	if (convert > min)
		cout<<hour;
	else
		cout<<min;
}