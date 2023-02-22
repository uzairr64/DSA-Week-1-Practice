#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,min,temp;
	int a[5];
	for(i=0; i<5; i++)
	{
		cout<<"enter value at "<<": ";
		cin>>a[i];
	}
	for(i=0; i<5; i++)
	{
		cout<<"value at "<<i<<": "<<a[i]<<"\n";
	}
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			
	    	if(a[i]>a[j])
	    	{
		    	temp=a[i];
		    	a[i]=a[j];
		    	a[j]=temp;
	    	}      
     	}
    }
        cout<<"sorted array in ascending order : ";
    for(i=0; i<5; i++)
    {
	  cout<<a[i]<<"\t";
    }
}
