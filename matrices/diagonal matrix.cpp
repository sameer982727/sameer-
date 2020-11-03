#include <iostream>
using namespace std;
class diagmat
{
    public:
          int ma[10];
          void insert(int e,int a,int b)
          { 
             if(a<1||b<1||a>10||b>10)
             {
                 cout<<"Array out of index"<<endl;
             }
             ma[a]=e;   
          }
		  void display(int size)
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
           int retrieve(int i,int j,int size)
          {
              if(i==j)
              {
                  return ma[i];
              }
              else if(i<1||j<1||i>size||j>size)
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
    diagmat d;
    cout<<"Enter the no of rows and columns in  matrx "<<endl;
    cin>>size;
    for(i=1,j=1;i<=size,j<=size;i++,j++)
    {
        cout<<"Enter diagonal element of index ("<<i<<","<<j<<")"<<endl;
        cin>>e;
        d.insert(e,i,j);
    }
    cout<<"Your entered diagonal matrix is: "<<endl;
    d.display(size);
    cout<<"Enter row from which u want to retrieve the element: "<<endl;
    cin>>a;
    cout<<"Enter column from which u want to retrieve the element: "<<endl;
    cin>>b;
    cout<<"Retrieved element is: "<<d.retrieve(a,b,size)<<endl;
    return 0;
}
