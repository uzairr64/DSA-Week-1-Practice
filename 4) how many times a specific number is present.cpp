#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,idn,count=0;
	int a[5];
	
	//setting values
	
	for(i=0; i<5; i++)
	{
		cout<<"enter value at "<<i<<" :";
		cin>>a[i];
	}
	
	//showing values
	cout<<"\n";
	for(i=0;i<5; i++)
	{
		cout<<"value at "<<i<<" :"<<a[i]<<"\n";
	}
	
	//setting identifier
	cout<<"\n";
	cout<<"enter number you want to find ";
	cin>>idn;
	for(i=0; i<5; i++)
	{
		if(idn==a[i])
		{
		  count++;
		}
	}
	
	cout<<idn<<" stored in array "<<count<<" times";
	getch();
}
