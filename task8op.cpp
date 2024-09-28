#include<iostream>
using namespace std;
void aggregate();
void marks();

int main()
{
    int n;
    cout<<"                                         UNIVERSITY ADMISSION MANAGEMENT SYSYTEM \n";
    cout<<"\nEnter the function you want to perform\n";
    cout<<" 1. Aggregate Calculation\n";
    cout<<" 2. Compare Marks\n";
    cout<<"Enter the number of the function you want to perform : ";
    cin>>n;
    if (n==1)
        aggregate();
    else
        if(n==2)
            marks();
}
void aggregate()
{
    float matric_marks;
    float ecat_marks;
    float inter_marks;
    float agregate;

    cout<<"This program calculates your entry test agregate \n";
    cout<<"Enter your matric marks : ";
    cin>> matric_marks;
    cout<<"Enter your inter marks : ";
    cin>> inter_marks;
    cout<<"Enter your Ecat marks : ";
    cin>> ecat_marks;

    agregate = (((ecat_marks/400)*0.3+(matric_marks/1100)*0.25+(inter_marks/550)*0.45)*100);

    cout<<"Your agregate is "<< agregate;
}
void marks ()
{      
    int marks1,marks2;
    cout<<"Enter marks of student 1 : ";
    cin>>marks1;
    cout<<"Enter marks of student 2 : ";
    cin>>marks2;
    if (marks1 > marks2)
        {
            cout<<"Student has more marks than student 2\n";
            cout<<"Roll num 1 assigned";
        }
    else 
        {
            cout<<"Student 2 has more marks than student 1\n";
            cout<<"Roll num 1 assigned";
        }

}