#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,min;
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
	min=a[0];
	
	//finding minimum
	
	for(i=1; i<5; i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	cout<<"minimum number is "<<min;
	getch();
}
