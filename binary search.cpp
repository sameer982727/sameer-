#include<iostream>
#include<conio.h>
using namespace std;
int binsearch(int a[],int left,int right,int el)
 {
 	int mid;
 	while(left<=right)
 	 {
 	 	mid=left+(right-1)/2;
 	 	if(a[mid]==el)
 	 	 return mid;
 	 	else if(a[mid]<el)
		  left=mid+1;
		else
		 right=mid-1;   
	  }
	  cout<<"element is not present";
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
	  se=binsearch(a,0,s-1,el);
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

