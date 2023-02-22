
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	cout<<"PRESS 11 to separate odd even integers in the List"<<endl;
	cout<<"\nPRESS 12 to count odd and even integers in the List"<<endl; 
	cout<<"\nPRESS 13 to sort Array in ascending order"<<endl;
	cout<<"\nPRESS 14 to sort Array in decending order"<<endl;
	cout<<"\nPRESS 15 to find Second smallest element in the Array"<<endl;
	cout<<"\nPRESS 16 to find Second largest element in the array"<<endl;
	cout<<"\nPRESS 17 to Check two arrays are same or not"<<endl;
	cout<<"\nPRESS 18 for Merging two Arrays of different lenths"<<endl;
	cout<<"\nPRESS 19 to find Maximum Difference between Two elements of Array"<<endl;
	cout<<"\nPress a Number\t";
	cin>>num;
	cout<<"\n";
	switch(num)
	{
		case 11:
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
			break;
		}
		
		case 12:
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
			break;
		}
		
		case 13:
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
    		break;
		}
		
		case 14:
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
	    			if(a[i]<a[j])
	    			{
		    			temp=a[i];
		    			a[i]=a[j];
		    			a[j]=temp;
	    			}      
     			}
    		}
        	cout<<"sorted array in descending order ";
    		for(i=0; i<5; i++)
    		{
	  			cout<<a[i]<<"\t";
    		}
    		break;
		}
		
		case 15:
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
	    			if(a[i]>a[j])
	    			{
			  			temp=a[i];
			  			a[i]=a[j];
		     			a[j]=temp;
	    			}
	    		}
  			}
			cout<<" 2nd smallest Number is   "<<a[1];		      
			break;
		}
		
		case 16:
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
			break;
		}
		
		case 17:
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
    			if(flag==1)
        		{
		       		cout<<"arrays are equal";
        		}
    			else
        		{
	        		cout<<"arrays are not equal";
        		}
			}    
			break;
		}
		
		case 18:
		{
			int i,j,c,k,s;
 			cout<<"enter size if first array ";
 			cin>>c;
 			int A[c];
 	
     		for(i=0; i<c; i++)
 	    	{
 				cout<<"enter value at "<<i<<" : ";
 				cin>>A[i];
	    	}
			cout<<"enter size of second array :";
			cin>>s;
			int a[s];
	
		    for(j=0; j<s; j++)
		    {
				cout<<"enter value at "<<j<<" :";
				cin>>a[j];
	    	}
			cout<<"first array : "<<"\n";
       		for(i=0; i<c; i++)
       		{
	   			cout<<A[i]<<"\n";
       		}
       
    		cout<<"second array : "<<"\n";
       		for(j=0;j<s; j++)
       		{
	   			cout<<a[j]<<"\n";
       		}
       
    		cout<<"after merging of arrays :\n";
       		for(i=0 ;i<c; i++)
       		{
       			cout<<A[i]<<"\n";
       		}
       		for(j=0; j<s; j++)
       		{
	   			cout<<a[j]<<"\n";
       		}
       		break;
		}
		
		case 19:
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
			break;														
		}
		
		default: 
		{
			cout << "You Press Invalid Number" << endl;
		}
	}
	getch();																									
}
