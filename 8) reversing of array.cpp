#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,c;
	int a[c];
	cout<<"enter size of array";
	cin>>c;
	 
	 //setting values
	 
	 for(i=0; i<c; i++)
	 {
	 	cout<<"enter value at "<<i<<" :";
	 	cin>>a[i];
	 }
	 
	 //showing values
	 
	 for(i=0; i<c; i++)
	 {
	 	cout<<"value at "<<i<<" :"<<a[i]<<"\n";
	 }
	 
	 //reversing array
	 
	 for(i=c-1; i>=0; i--)
	 {
	 	cout<<a[i]<<"\n";
	 }
	 getch();
}
