#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;
 class sorting
  { 
   public:
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

	int Arr[100],n,choice;

	cout<<"Enter Size of Array ";

	cin>>n;

	do

	{

		cout<<"\n\nMENU";

		cout<<"\n1. sort the array using selection sort;

		cout<<"\n2. Sort the array using insertion sort method";

		cout<<"\n3. Sort the array using bubble sort method";

		cout<<"\n4. display the array";

		cout<<"\n5. Exit";
		cout<<"enter the choice";
		cin>>choice;
        switch(choice)

		{

			case 1:

				break;

			case 2:

				break;

			case 3:	

				break;

			case 4:

				break;

			case 6:	break;

			default:cout<<"\nInvalid choice";

		}

	}while(choice!=6);


}




