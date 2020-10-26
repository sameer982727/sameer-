#include<iostream>
#include<conio.h>
using namespace std;

int linsearch(int a[],int s,int el)
 {
 	for(int i=0;i<s;i++)
 	 	if(a[i]==el)
 	 	 	return i;
 	return -1;
}
 int main()
{
  	 int a[50],s,el,se;
  	 cout<<"enter the  no of element in the array";
  	 cin>>s;
  	 for(int i=0;i<s;i++)
  	  {
  	  	cin>>a[i];
		}
	cout<<"the array is"<<endl;
	 for(int i=0;i<s;i++)
	  {
	  
	  	cout<<a[i];
	  }
	  cout<<"enter the element to be searched";
	  cin>>el;
	  se=linsearch(a,s,el);
	  if(se==-1)
	   {
	   	 cout<<"element not found in the array";
	   }
	  else
	   {
	   	 cout<<"element found at:"<<se; 
 		} 
 		return 0;
  }

