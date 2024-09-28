#include<iostream>
using namespace std;

void flowershop(int redrose, int whiterose, int tulip);

main()
{
	int redrose,whiterose,tulip;
	cout<<"Enter the number of redrose : ";
	cin>>redrose;
	cout<<"Enter the number of whiterose : ";
	cin>>whiterose;
	cout<<"Enter the number of tulip : ";
	cin>>tulip;
	
	flowershop(redrose,whiterose,tulip);
	
}

void flowershop(int redrose, int whiterose, int tulip)
{
	float total;
	total = redrose*2 + whiterose*4.1 + tulip*2.5;
	if (total >=200)
	{	cout<<"original amount : "<<total ;
		total = total - (total*0.20);
		cout<<"\nTotal payable amount after discount : "<<total;
	}
	else
		cout<<"Total amount without discount is : ";
}
