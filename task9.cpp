#include<iostream>
using namespace std;
int main()

{
	int people,rolls,days,sheets,person;
	cout<<"Enter the number of tissue rolls : ";
	cin>>rolls;
	cout<<"number if peoples in household : ";
	cin>>people;
	sheets=rolls*500;
	person=people*57;
	days = sheets/person;
	
	
	if (days >=14)
		cout<<"Your tp will last "<<days<<" , no need to panic!!";
	else
		cout<<"your tp will last "<<days<<" days , buy now !!";
}