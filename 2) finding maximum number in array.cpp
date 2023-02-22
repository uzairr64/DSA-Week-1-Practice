#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,max;
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
	max=a[0];
	
	//finding maximum
	
	for(i=1; i<5; i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	cout<<"maximum number is "<<max;
	getch();
}
