#include<iostream.h>
#include<conio.h>
struct node
 {
  int data;
  node *next;
 };
class stack
 {
  node *top;
  public:
  stack()
   {
    top==NULL;
    }
  void push( )
   {
    int value;
    node *ptr;
    cout<<"enter the number to enter";
    cin>>value;
    ptr=new node;
    ptr->data=value;
    ptr->next=NULL;
    if(top==NULL)
     {
       top=ptr;
     }
    else
     {
      ptr->next=top;
      top=ptr;
     }
   }

   void pop()
     {
       node *temp;
       temp=top;
      if(top==NULL)
       {
	cout<<"stack is empty";
       }
      else
       {
	  cout<<"deleted element"<<temp->data;
	  top=top->next;
	  delete temp;
	 }
       }
      void topmost()
	{
	 if(top== NULL)
	  {
	   cout<<"stack is empty";
	  }
	else
	 {
	  cout<<top->data;
	}
      }
    void clear()
     {
       node *temp,*ptr1;
       temp=top;
       while(temp!=NULL)
	{
	 cout<<temp->data<<"\n";
	 ptr1=temp->next;
	 delete temp;
	 temp=ptr1;
       }
       cout<<"NULL";
     }
   void display()
    {
     node *temp;
     temp=top;
     if(top==NULL)
      {
       cout<<"stack is empty";
      }
     else
      {
       while(temp!=NULL)
	{
	 cout<<temp->data;
	}
	 temp=temp->next;
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
     cout<<"\n choose the option \n"<<"\n";
     cout<<"\n 1.PUSH \n 2.POP \n 3.TOPMOST \n 4.CLEAR \n 5.DISPLAY"<<"\n";
     cin>>ch;
     switch(ch)
      {
       case 1:cout<<" PUSH "<<"\n";
	      s.push();
	      s.display();
	      break;
      case  2:cout<<" POP "<<"\n";
	      s.pop();
	      s.display();
	      break;
      case  3:cout<<" TOPMOST "<<"\n";
	      s.topmost();
	      s.display();
	      break;
      case  4:cout<<" CLEAR "<<"\n";
	      s.clear();
	      s.display();
	      break;
      case  5:cout<<" DISPLAY "<<"\n";
	      s.display();
	      break;
      default:cout<<"invalid choice ";
     }
    }while(ch!=0);
     getch();
   }