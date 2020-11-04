#include <iostream>
using namespace std;
class uppermat
{
    public:
          int ma[10];
          void insert(int e,int a,int b)
          { 
             if(a<1||b<1||a>10||b>10)
             {
                 cout<<"Array out of index"<<endl;
             }
            else
			{
			  
             ma[(b*(b-1))/2+a]=e;   
          }
     }
		  void display(int size)
          {
              for(int i=1;i<=size;i++)
              {
                  for(int j=1;j<=size;j++)
                  {
                      if(i<=j)
                      {
                          cout<<ma[(j*(j-1))/2+i]<<"  ";
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
              if(i<=j&&i<=size&&j<=size)
              {
                  return ma[(j*(j-1))/2+i];
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
    uppermat u;
    cout<<"Enter the no of rows and columns in  matrx "<<endl;
    cin>>size;
    for(i=1;i<=size;i++)
     {
     	for(j=1;j<=size;j++)
     	 {
     	 	if(j>=i)
     	 	 {
     	 	 	cout<<"enter the element of lower triangle matrix of index("<<i<<","<<j<<")"<<endl;
     	 	 	cin>>e;
     	 	 	u.insert(e,i,j);
			   }
		  }
	 }
        cout<<"enter the upper trianglular matrix is:"<<endl;
        u.display(size);
        cout<<"enter the row from which u want to retrieve the element"<<endl;
        cin>>a;
        cout<<"enter the column from which u want to retrieve the element"<<endl;
        cin>>b;
        cout<<"retrieved element is"<<u.retrieve(a,b,size)<<endl;
        return 0;
}
