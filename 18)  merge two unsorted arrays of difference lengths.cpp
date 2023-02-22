
            //write a program to merge two unsorted arrays of difference lengths
 			
 #include<iostream>
 #include<conio.h>
 using namespace std;
 int main()
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
getch();
}
 
 			
