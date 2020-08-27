#include<iostream.h>
#include<conio.h>
# define M 100
class stack
  {
    int arr[M];
    public:
     int top;
   stack()
    {
     top=-1;
    }
   void push()
    {
     int x;
     cout<<"enter the element";
     cin>>x;
     if(top==M-1)
      {
	cout<<"stack is full"<<"\n";
	}
     else
      {
	 top++;
	 arr[top]=x;
       }
     }
     void pop()
      {
       int data;
       if(top==-1)
       {
	cout<<"stack is empty";
	}
      else
       {
	 data=arr[top];
	 top--;
	 cout<<"deleted element is"<<data<<"\n";
       }
     }
       void clear()
	{
	 while(top!=-1)
	  {
	   cout<<arr[top--]<<"\n";
	  }
	  cout<<"stack is null"<<"\n";
	}
	void topmost()
	 {
	  if(top==-1)
	   {
	    cout<<"stack is empty";
	   }
	  else
	   {
	    cout<<"the topmost element is"<<arr[top]<<"\n";
	   }
	 }
	 void display()
	     {
	  for(int i=top;i>=0;i--)
	   {
	    cout<<arr[i]<<"\n";
	   }
	 }
      };

   void main()
    {
    clrscr();
    stack s;
    int ch;
    do
     {
      cout<<"enter your choice"<<"\n";
      cout<<"\n1.PUSH \n2.POP \n3.CLEAR \n4.TOPMOST \n5.DISPLAY\n"<<"\n";
      cin>>ch;
      switch(ch)
       {
	case 1:cout<<"\n PUSH \n"<<"\n";
	       s.push();
	       break;
	case 2:cout<<"\n POP \n"<<"\n";
	       s.pop();
	       break;
	case 3:cout<<"\n CLEAR \n"<<"\n";
	       s.clear();
	       break;
	case 4:cout<<"\n TOPMOST \n"<<"\n";
	       s.topmost();
	       break;
	case 5:cout<<"\n DISPLAY \n"<<"\n";
	       s.display();
	       break;
       default: cout<<"invalid choice";
      }
     }while(ch!=0);
      getch();
    }

