#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j;
	int a[5];
	
	// setting values
	
	for(i=0; i<5; i++)
    	{
		cout<<"enter value at "<<i<<" :";
		cin>>a[i];
        }
		//showing values
		
		for(i=0; i<5; i++)
		{
			cout<<"value at "<<i<<" :"<<a[i]<<"\n";
		}
		
		//finding unique element
	
		bool flag;
		for(i=0; i<5; i++)
		{
			flag=0;
			for(j=0; j<5; j++)
			{
				if(j==i)
		    	{
		    		j=j+1;
				}
			        if(a[i]==a[j])
		       	{
		  	       flag++;
	     	    }
            }
        
                if(flag>=1)
                {    
                cout<<"no unique number is present "<<a[i]<<"\n";
                }
                else
                {
            	cout<<"unique number is present "<<a[i]<<"\n";
		        }
		}
   	getch();
}


