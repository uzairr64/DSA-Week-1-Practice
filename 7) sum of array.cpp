#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,sum;
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
	sum=a[0];
	for(i=1 ; i<5; i++)
	{
		sum=sum+a[i];
	}
	
	cout<<sum;
	getch();
}
