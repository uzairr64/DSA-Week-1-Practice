#include<iostream>
using namespace std;
int main()
{
	int c,i,s;
	
    cout<<"enter size of first array ";
	cin>>c;
	int A[c];
	
	cout<<"\n";
	for(i=0; i<c; i++)
	{
		cout<<"enter value at "<<i<<" : ";
		cin>>A[i];
	}
	
	cout<<"enter size of second array ";
	cin>>s;
	int a[s];
	
	cout<<"\n";
	for(i=0; i<s; i++)
	{
		cout<<"enter value at "<<i<<" :";
		cin>>a[i];
	}
	cout<<"\n";
	bool flag;
	if(c!=s)
	{
		cout<<"array not equal ";
	}
		else
		{
        	for(i=0; i<c; i++)
         	{
	        	if(A[i]==a[i])
	            	{
		            	flag++;
		            }
        	}
    	if (flag==1)
        	{
		       cout<<"arrays are equal";
        	}
    	else
        	{
	        	cout<<"arrays are not equal";
        	}
}    

}
