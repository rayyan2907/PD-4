#include<iostream>
using namespace std;
void pets(int holidays );
main()
{
	int holidays;
	cout<<"Enter the number of holidays : ";
	cin>>holidays;
	
	pets(holidays);

}

 void pets(int holidays) {
    int work_day, time_for_games, hrs, mins, diff;
    work_day = 365 - holidays;
    time_for_games = work_day * 63 + holidays * 127;
    diff = 30000 - time_for_games; // calculate difference
    mins = diff % 60;
    hrs = diff / 60; // calculate difference hours	

	if (time_for_games >= 30000)
		{ 
			cout<<"Tom will run away \n";
			cout<<hrs<<" hours and "<<mins<<" minutes for sleep";

		}
	else
		{
			cout<<"Tom will sleep well \n";
			cout<<hrs<<" hours and "<<mins<<" minutes for sleep";

		}
}	