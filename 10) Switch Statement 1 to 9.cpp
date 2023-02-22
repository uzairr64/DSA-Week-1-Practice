#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	cout<<"PRESS 1 for printing minimum number in the list"<<endl;
	cout<<"\nPRESS 2 for printing maximum number in the list"<<endl; 
	cout<<"\nPRESS 3 for searching a number is present or not"<<endl;
	cout<<"\nPRESS 4 for searching how many times a number is present"<<endl;
	cout<<"\nPRESS 5 for printing odd numbers in the list"<<endl;
	cout<<"\nPRESS 6 for printing even numbers in the list"<<endl;
	cout<<"\nPRESS 7 to find sum of elements in a array"<<endl;
	cout<<"\nPRESS 8 to Print reverse of array"<<endl;
	cout<<"\nPRESS 9 to Print only unique numbers"<<endl;

	int a[5];
	int num,i,j,min;
	cout<<"\nPlease Press a number ";
	cin>>num;
	cout<<"\n";
	switch(num)
	{
		case 1:
			{
		   		int i,min;
				int a[5];
	
			//setting values
	
			for(i=0; i<5; i++)
			{
				cout<<"enter value at "<<i<<" :";
				cin>>a[i];
			}
	
			//showing values
	
			for(i=0;i<5; i++)
			{
				cout<<"value at "<<i<<" :"<<a[i]<<"\n";
			}
				min=a[0];
	
			//finding minimum
	
			for(i=1; i<5; i++)
			{
				if(min>a[i])
				{
					min=a[i];
				}
			}
				cout<<"minimum number is "<<min;
				break;
			}
		
		case 2:
		{
			int i,max;
			int a[5];
	
			//setting values
	
			for(i=0; i<5; i++)
			{
				cout<<"enter value at "<<i<<" :";
				cin>>a[i];
			}
	
			//showing values
	
			for(i=0;i<5; i++)
			{
				cout<<"value at "<<i<<" :"<<a[i]<<"\n";
			}
			max=a[0];
	
			//finding maximum
	
			for(i=1; i<5; i++)
			{
				if(max<a[i])
				{
					max=a[i];
				}
			}
			cout<<"maximum number is "<<max;
			break;
		}
		
		case 3:
		{		
			int i,idn;
			int a[5];
	
			//setting values
	
			for(i=0; i<5; i++)
			{
				cout<<"enter value at "<<i<<" :";
				cin>>a[i];
			}
	
			//showing values
	
			for(i=0;i<5; i++)
			{
				cout<<"value at "<<i<<" :"<<a[i]<<"\n";
			}
	
			//setting identifier
	
			cout<<"enter number you want to find ";
			cin>>idn;
			bool flag;
	
			for(i=0; i<5; i++)
			{
				if(idn==a[i])
				{
		  			flag++;
				}
			}
			if(flag==1)
			{
				cout<<"value found";
			}
			else
			{
	 			cout<<"value not found";
    		}
		}

		case 4:
		{
			int i,idn,count=0;
			int a[5];
	
			//setting values
	
			for(i=0; i<5; i++)
			{
				cout<<"enter value at "<<i<<" :";
				cin>>a[i];
			}
	
			//showing values
			
			cout<<"\n";
			for(i=0;i<5; i++)
			{
				cout<<"value at "<<i<<" :"<<a[i]<<"\n";
			}
	
			//setting identifier
			cout<<"\n";
			cout<<"enter number you want to find ";
			cin>>idn;
			for(i=0; i<5; i++)
			{
				if(idn==a[i])
				{
		  			count++;
				}
			}
	
			cout<<idn<<" stored in array "<<count<<" times";
         	break;
		}
		
		case 5:
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
			break;
		}
		
		case 6:
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
			break;
		}
		
		case 7:
		{
			int i,sum;
			int a[5];
	
			//setting values
	
			for(i=0; i<5; i++)
			{
				cout<<"enter value at "<<i<<" :";
				cin>>a[i];
			}
	
			//showing values
	
			for(i=0;i<5; i++)
			{
				cout<<"value at "<<i<<" :"<<a[i]<<"\n";
			}
			sum=a[0];
			for(i=1 ; i<5; i++)
			{
				sum=sum+a[i];
			}
	
			cout<<sum;
			break;
		}
		
		case 8:
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
			break;
		}
		
		case 9:
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
			}
        
                if(flag>=1)
                {    
                	cout<<"no unique number is present "<<a[i]<<"\n";
                }
                else
                {
            		cout<<"unique number is present "<<a[i]<<"\n";
		        }
			break;
       }
       default: 
		{
			cout << "Invalid Choice" << endl;
		}
	}

	getch();
}
