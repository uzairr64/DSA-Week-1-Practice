#include<iostream>
using namespace std;
int main()
{
	int c,s,i;
	cout<<"enter size of fist array ";
	cin>>c;
	int A[c];
	cout<<"\n";
	for(i=0; i<c; i++)
	{
		cout<<"enter value at "<<i<<" : ";
		cin>>A[i];
	}
	
	cout<<"\n"<<"enter size of second array ";
	cin>>s;
	int a[s];
	
	cout<<"\n";
	for(i=0; i<s; i++)
	{
		cout<<"enter value at "<<i<<" : ";
		cin>>a[i];
	}
	for(i=0; i<c; i++)
	{
		if(A[i]%2==0)
		{
			cout<<"\n"<<"even in first array "<<A[i]<<"\n";
			
		}
		
		else
		{
			cout<<"\n"<<"odd in first array "<<A[i]<<"\n";
		}
	}
	
	for(i=0; i<s; i++)
	{
		if(a[i]%2==0)
		{
			cout<<"\n"<<"even in second array "<<a[i]<<"\n";
		}
		if(a[i]%2!=0)
		{
			cout<<"\n"<<"odd in second array "<<a[i]<<"\n";
		}
	}
}
