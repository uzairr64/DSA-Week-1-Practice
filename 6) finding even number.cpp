#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,c;
	int a[c];
	
	//setting size of array
	
	cout<<"enter size of array ";
	cin>>i;
	
	//storing values in array
	
	for(i=0; i<c; i++)
	{
		cout<<"enter value at "<<i<<" location ";
		cin>>a[c];
	}
	
	//showing values
	
	for(i=0; i<c; i++)
	{
		cout<<"value at "<<i<<" location "<<a[i]<<"\n";
	}
	
	//checking odd numbrs
	
	bool flag;
	for(i=0; i<c; i++)
	{
		if((a[i])%2==0)
		{
			cout<<"even number: "<<a[i]<<"\n";
			flag++;
		}
	}
	if(flag==0)
	{
		cout<<"no even number present";
	}
	getch();
}
	
	
	
	
	
