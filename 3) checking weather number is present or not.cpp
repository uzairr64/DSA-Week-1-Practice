#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,idn;
	int a[5];
	
	//setting values
	
	for(i=0; i<5; i++)
	{
		cout<<"enter value at "<<i<<" :";
		cin>>a[i];
	}
	
	//showing values
	
	for(i=0;i<5; i++)
	{
		cout<<"value at "<<i<<" :"<<a[i]<<"\n";
	}
	
	//setting identifier
	
	cout<<"enter number you want to find ";
	cin>>idn;
	bool flag;
	
	for(i=0; i<5; i++)
	{
		if(idn==a[i])
		{
		  flag++;
		}
	}
	if(flag==1)
	{
		cout<<"value found";
	}
	else
	{
	 cout<<"value not found";
    }
	getch();
}
