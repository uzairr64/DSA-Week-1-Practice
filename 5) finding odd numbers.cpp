a#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,c;
	
	//setting size of array
	
	cout<<"enter size of array ";
	cin>>c;
	int a[c];
	
	//storing values in array
	cout<<"\n";
	for(i=0; i<c; i++)
	{
		cout<<"enter value at "<<i<<" location ";
		cin>>a[i];
	}
	
	//showing values
	cout<<"\n";
	for(i=0; i<c; i++)
	{
		cout<<"value at "<<i<<" location "<<a[i]<<"\n";
	}
	
	//checking odd numbrs
	cout<<"\n";
	bool flag;
	for(i=0; i<c; i++)
	{
		if((a[i])%2!=0)
		{
			cout<<"odd number: "<<a[i]<<"\n";
			flag++;
		}
	}
	if(flag==0)
	{
        	cout<<"no odd number present";
	}
	getch();
}
	
	
	
	
	
