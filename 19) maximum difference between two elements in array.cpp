                 
                    //Whrite a program to find maximum difference between two elements in array

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,c,temp,dif;
	cout<<"enter size of array :";
	cin>>c;
	int a[c];
	for(i=0; i<c; i++)
	{
		cout<<"enter value at "<<i<<" :";
		cin>>a[i];
	}
	for(i=0; i<c; i++)
	{
		for(j=i+1; j<c; j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	cout<<"maximum difference between two elements :"<<a[(c-1)]-a[0];
	getch();
}
