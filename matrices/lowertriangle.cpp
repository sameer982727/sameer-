#include <iostream>
using namespace std;
class lowermat
{
    public:
          int ma[10];
          void insert(int e,int a,int b)
          { 
             if(a<1||b<1||a>10||b>10)
             {
                 cout<<"Array out of index"<<endl;
             }
             ma[(a*(a-1))/2+b]=e;   
          }
		  void display(int size)
          {
              for(int i=1;i<=size;i++)
              {
                  for(int j=1;j<=size;j++)
                  {
                      if(i>=j)
                      {
                          cout<<ma[(i*(i-1))/2+j]<<"  ";
                      }
                      else
                      {
                          cout<<"0"<<"  ";
                      }
                  }
                  cout<<endl<<endl;
              }
          }
           int retrieve(int i,int j,int size)
          {
              if(i>=j&&i<=size&&j<=size)
              {
                  return ma[(i*(i-1))/2+j];
              }
              else 
              if(i<1||j<1||i>size||j>size)
              {
                cout<<"Invalid row and column input"<<endl;
                exit(0);
              }
              else 
              {
                  return 0;
              }
          }  
};
int main()
{   
    int size,e,i,j,a,b;
    lowermat l;
    cout<<"Enter the no of rows and columns in  matrx "<<endl;
    cin>>size;
    for(i=1;i<=size;i++)
     {
     	for(j=1;j<=size;j++)
     	 {
     	 	if(i>=j)
     	 	 {
     	 	 	cout<<"enter the element of lower triangle matrix of index("<<i<<","<<j<<")"<<endl;
     	 	 	cin>>e;
     	 	 	l.insert(e,i,j);
			   }
		  }
	 }
        cout<<"enter the lower trianglular matrix is:"<<endl;
        l.display(size);
        cout<<"enter the row from which u want to retrieve the element"<<endl;
        cin>>a;
        cout<<"enter the column from which u want to retrieve the element"<<endl;
        cin>>b;
        cout<<"retrieved element is"<<l.retrieve(a,b,size)<<endl;
        return 0;
}
