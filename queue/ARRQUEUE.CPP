#include<iostream.h>
#include<conio.h>
#include<stdio.h>
# define X 50
class queue
{
  int arr[X];
  int front,rear;
  public:
 queue()
  {
   front=-1;
   rear=-1;
   }
  int isFull()
   {
    if(rear==X-1 || front==rear-1)
     return 1;
     return 0;
    }
  int isEmpty()
   {
    if(front==-1 && rear==-1)
     return 1;
     return 0;
    }
  void enqueue(int a)
   {
    if(isFull())
     {
      cout<<"queue is full"<<"\n";
      }
     else if(isEmpty())
      {
       front++;
       rear++;
       arr[rear]=a;
      }
     else
      {
       rear++;
       arr[rear]=a;
       }
      }
     void dequeue()
      {
       if(isEmpty())
	{
	 cout<<"queue is empty"<<"\n";
	 }
       else if(front==rear)
	{
	  cout<<arr[front];
	  front=rear=-1;
	 }
	else
	 {
	  cout<<arr[front];
	   front++;
	  }
	}
       int firstel()
	{
	 if(isEmpty())
	  {
	   cout<<"quene is empty"<<"\n";
	    return -1;
	   }
	  else
	   {
	    return arr[front];
	    }
	  }
	 void clear()
	  {
	   front=rear=-1;
	   }
	 void display()
	  {
	   if(isEmpty())
	    {
	     cout<<"no element in quene"<<"\n";
	     }
	   else
	    {
	     for(int i=front;i<=rear;i++)
	      {
	      cout<<arr[i];
	      cout<<"\n";
	      }
	     }
	    }
	  };
  void main()
   {
    clrscr();
    queue q;
    int ch,b;
    cout<<"\n 1.ENQUENE \n 2.DEQUENE \n 3.CLEAR \n 4.FIRSTEL \n 5.DISPLAY \n ";
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
	case 3:cout<<" CLEAR "<<"\n";
	       q.clear();
	       break;
	case 4:cout<<" FRONT "<<"\n";
	       q.firstel();
	       break;
	case 5:cout<<" DISPLAY "<<"\n";
	       q.display();
	       break;
	default:cout<<"invalid choice"<<"\n";
       }
      }while(ch!=0);
       getch();
    }
