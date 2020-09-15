#include<iostream.h>
#include<conio.h>
# define M 100
class stack
  {
    public:
    int arr[M];
    int top;
   stack()
    {
     top=-1;
    }
   void push(int x)
    {
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
     int pop()
      {
       if(top==-1)
       {
	cout<<"stack is empty";
	}
      else
       {
	 return arr[top--];

       }
     }
    };
    class queue:public stack
     {
      public:
      stack s1,s2;
     void enqueue(int y)
      {
       int count=0;
       if(s1.top==-1)
	{
	 cout<<"queue is empty";
	 }
	 s1.push(y);
       count++;
      }
      void dequeue()
       {
	int s,d;
	int count=0;
	if(s1.top==-1)
	 {
	  cout<<"queue is empty";
	  }
	else
	 {
	   s=s1.pop();
	   s2.push(s);
	  }
	   d=s2.pop();
	   cout<<d<<"\n";
	   count--;
	  for(int i=0;i<count;i++)
	   {
	    s=s2.pop();
	    s1.push(s);
	  }
	 }
	 void display()
	     {
	     if(s1.top==-1)
	      {
	       cout<<"queue is empty";
	       }

	  for(int i=0;i<=top;i++)
	   {
	    cout<<arr[i]<<"\n";
	   }
	 }
      };
    void main()
   {
    clrscr();
    queue q;
    int ch,b;
    cout<<"\n 1.ENQUENE \n 2.DEQUENE \n 3.DISPLAY \n ";
      do
       {
	cout<<"enter the choice"<<"\n";
	cin>>ch;
	switch(ch)
       {
	case 1:cout<<" ENQUENE "<<"\n";
	       cout<<"enter the element to be entered ";
	       cin>>b;
	       q.enqueue(b);
	       break;
	case 2:cout<<" DEQUENE "<<"\n";
	       q.dequeue();
	       break;
	case 3:cout<<" DISPLAY "<<"\n";
	       q.display();
	       break;
	default:cout<<"invalid choice"<<"\n";
       }
      }while(ch!=0);
       getch();
    }
