#include<iostream.h>
#include<conio.h>
class queue
 {
  struct node
   {
    int data;
    node *next;
    }*front,*rear;
    public:
  int isEmpty()
   {
    if(front==NULL && rear==NULL)
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
       rear->next=front;
      }
    else
     {
      rear->next=temp;
      rear=temp;
      rear->next=front;
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
      else if(front==rear)
       {
	front=rear=NULL;
	delete ptr;
       }
      else
       {
	front=front->next;
	rear->next=front;
	delete ptr;
      }
    }
      void firstel()
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
	   front=rear=NULL;
	   }
     void display()
	  {
	    node *ptr;
	    ptr=front;
	    if(isEmpty())
	     {
	      cout<<"queue is empty"<<"\n";
	     }
	    else
	     {
	      while(ptr->next!=front)
	       {
		cout<<ptr->data<<"\n";
		ptr=ptr->next;
	      }
	       cout<<ptr->data<<"\n";
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
