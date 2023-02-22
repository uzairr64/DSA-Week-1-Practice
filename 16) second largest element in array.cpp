#include<iostream>
using namespace std;
int main()
{
	int i,j,temp,min;
	int a[5];
	for(i=0; i<5; i++)
	{
		cout<<"enter value at "<<i<<": ";
		cin>>a[i];
}
  for(i=0; i<5; i++)
  {
    	for(j=i+1; j<5; j++)
    	{
	    	if(a[i]<a[j])
	    	{
			  temp=a[i];
			  a[i]=a[j];
		      a[j]=temp;
	    	}
	    }
  }
cout<<" 2nd largest Number is   "<<a[1];		      
}

