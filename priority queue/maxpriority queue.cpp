#include<iostream>
#include<math.h>
using namespace std;
class heap
{
 public:
int a[50],s,c;
void heapinkey(int a[],int d,int e)
 {
 	int g=floor(d/2);
 	a[d]=e;
 	while(d>1&&a[g]<a[d])
 	{
 		swap(a[d],a[g]);
 		d=floor(d/2);
 		g=floor(d/2);
	 }
 }
 void insert(int a[],int v,int s)
  {
  	a[s]=-100;
  	heapinkey(a,s,v);
  }
  void maxheapify(int a[],int el,int s)
   {
   	 int le,ri,m;
     le=2*el;
     ri=2*el+1;
     m=el;
     if(le<s&&a[el]<a[le])
      {
      	m=le;
	  }
	if(ri<s&&a[m]<a[ri])
	 {
	 	m=ri;
	 }
    if(m!=el)
     {
     	swap(a[m],a[el]);
     	maxheapify(a,m,s);
	 }
   }
   int maximumheap(int a[])
    {
      return a[1];	
	}
 void extractmaxheap(int a[],int s)
  {
  	if(s=0)
  	 {
  	 	cout<<"there is no element in the tree";
   }
    else
     {
     	a[1]=a[s];
     	s--;
     	maxheapify(a,1,s);
    }
	 }
}; 
int main()
 {
	int ch,i,k,s;
	heap h;
	int a[s];
	do
	 {
	  cout<<"\n 1.increase the key value \n 2.insert the element  \n 3.maximum value \n 4.extract maximum value \n "<<endl;
	  cout<<"enter the choice";
	  cin>>ch;
	  switch(ch)
	   {
	    case 1:
		    cout<<"enter the key value";
		    cin>>i;
		    cout<<"how much key is to be increased";
		    cin>>k;
		    h.heapinkey(a,i,k);
		    break;
	    case 2:
		    cout<<"enter the value to be inserted";
	        cin>>k;
	        s++;
	        h.insert(a,k,s);
	        break;
	    case 3:
		    cout<<"maximum element in heap"<<endl;
		    h.maximumheap(a);
		    cout<<endl;
		    break;
	    case 4:
		    cout<<"extract max element from heap"<<endl;
		    h.extractmaxheap(a,s);
		    cout<<endl;
		    break;
	    default: cout<<"wrong choice"<<endl;
	     }
	      }while(ch!=0);
	 }

