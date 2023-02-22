#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,c;
	int even=0; int odd=0;
	cout<<"enter size of array ";
	cin>>c;
	int a[c];
	for(i=0; i<c; i++)
	{
		cout<<"enter value at "<<i<<": ";
		cin>>a[i];
	}
	for(i=0; i<c; i++)
	{
		cout<<"value at "<<i<<": "<<a[i]<<"\n";
	}
	for(i=0; i<c; i++)
	{
		if(a[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	cout<<"even numbers in array: "<<even<<"\n";
	cout<<"odd numbers in array: "<<odd<<"\n";
	getch();
}
