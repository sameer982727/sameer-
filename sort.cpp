#include<iostream>
#include<conio.h>
using namespace std;
 class sorting
  { 
   public:
   void insert(int a[],int s)
    {
     for(int i=0;i<s;i++)
       {
       	 cout<<"enter the element of array"<<i+1<<endl;
       	 cin>>a[i];
	   }
    	
	}
   void selecsort(int a[],int s)
   {
  	 int min,temp;
  	for(int i=0;i<s-1;i++)
  	 {
  	 min=i;
  	 for(int j=i+1;j<s;j++)
  	  if(a[j]<a[min])
  	   min=j;
  	  temp=a[i];
  	  a[i]=a[min];
  	  a[min]=temp;
  }
}
    void insesort(int a[],int s)
    {
  	int m,j;
  	for(int i=1;i<s;i++)
  	 {
  	 m=a[i];
  	 j=i;
  	 while(j>0 && a[j-1]>m)
  	  {
  	  	a[j]=a[j-1];
  	  	j--;
		}
		a[j]=m;
  }

}
    void bubblesort(int a[],int s)
   {
  	int temp;
    for(int i=0;i<s;i++)
     {
       for(int j=0;j<s-i-1;j++)
	    {
	    	if(a[j]>a[j+1])
	    	 {
	    	 	temp=a[j];
	    	 	a[j]=a[j+1];
	    	 	a[j+1]=temp;
			 }
		 } 
	 }
  }
 void display(int a[],int s)
  {
  	for(int i=0;i<s;i++)
  	 {
  	 	cout<<a[i];
	   }
  }
};

int main()

{
	sorting s;
	int ch;
	int a[50],n;
	cout<<"enter the size of the array";
	cin>>n;
	a[n];
	s.insert(a,n);

	do

	{

		cout<<"\n\nMENU";

		cout<<"\n1. sort the array using selection sort";

		cout<<"\n2. Sort the array using insertion sort method";

		cout<<"\n3. Sort the array using bubble sort method";
		cout<<"enter the choice";
		cin>>ch;
        switch(ch)

		{

			case 1:s.selecsort(a,n);
			       cout<<"sorted array is"<<endl;
			       s.display(a,n);
				   break;

			case 2:s.insesort(a,n);
			       cout<<"sorted array is"<<endl;
			       s.display(a,n);
				   break;

			case 3:s.bubblesort(a,n);
			       cout<<"sorted array is"<<endl;
				   s.display(a,n);	
				   break;

			default:cout<<"\nInvalid choice";

		}

	}while(ch!=0);

}




