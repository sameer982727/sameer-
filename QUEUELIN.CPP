#include<iostream.h>
#include<conio.h>
class queue
{   public:
  struct node
   {
    int data;
    node *next;
   }*front,*rear;
  public:
 queue()
  {
   front=rear=NULL;
   }
  int isEmpty()
   {
    if(front==NULL && rear== NULL)
     return 1;
     return 0;
    }
  void enqueue(int a)
   {
    node *temp;
    temp=new node;
    temp->data=a;
    temp->next=NULL;
    if(isEmpty())
     {
       front=rear=temp;
      }
     else
      {
	rear->next=temp;
	rear=temp;
       }
      }
     void dequeue()
      {
	node *ptr;
	ptr=front;
       if(isEmpty())
	{
	 cout<<"queue is empty"<<"\n";
	 }
	else
	 {
	  cout<<"dequeued element is:"<<front->data<<"\n";
	   front=front->next;
	   delete ptr;
	  }
	}
       int firstel()
	{
	 if(isEmpty())
	  {
	   cout<<"quene is empty"<<"\n";
	   }
	  else
	   {
	    cout<<front->data<<"\n";
	    }
	  }
	 void clear()
	  {
	   node *s;
	   s=front;
	   node *ptr;
	   while(s!=NULL)
	    {
	     cout<<s->data<<"\n";
	     ptr=s->next;
	     delete s;
	     s=ptr;
	  }
	    cout<<"queue is empty"<<"\n";
	   }
	 void display()
	  {
	   node *ptr;
	   if(isEmpty())
	    {
	     cout<<"no element in quene"<<"\n";
	     }
	   else
	    {
	     ptr=front;
	     while(ptr!=NULL)
	      {
	      cout<<ptr->data<<"\n";
	      ptr=ptr->next;
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
	case 4:cout<<" FIRSTEL "<<"\n";
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
