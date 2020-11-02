#include <iostream>
using namespace std;
class diagmat
{
    public:
          int ma[10];
          void store(int e,int a,int b)
          { 
             if(a<1||b<1||a>10||b>10)
             {
                 cout<<"Array out of index"<<endl;
             }
             ma[a]=e;   
          }
		            void show(int size)
          {
              for(int i=1;i<=size;i++)
              {
                  for(int j=1;j<=size;j++)
                  {
                      if(i==j)
                      {
                          cout<<ma[i]<<"  ";
                      }
                      else
                      {
                          cout<<"0"<<"  ";
                      }
                  }
                  cout<<endl<<endl;
              }
          }
          
};
int main()
{   
    int size,e,i,j,a,b;
    diagmat d;
    cout<<"Enter the no of rows and columns in matrx "<<endl;
    cin>>size;
    for(i=1,j=1;i<=size,j<=size;i++,j++)
    {
        cout<<"Enter diagonal element of index ("<<i<<","<<j<<")"<<endl;
        cin>>e;
        d.store(e,i,j);
    }
    cout<<"Your entered diagonal matrix is: "<<endl;
    d.show(size);
    return 0;
}

