#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class sll()
{
 public:
 struct node
 {
  int data;
  node *next;
  }*head;
   sll()
    {
      head=NULL;
     }
   void create(int value)
    {
      temp=new node;
      temp->data=value;
      temp->next=NULL;
     }
    void display()
     {
      node *n;
      cout<<"display the list";
      n=head;
      while(n!=NULL)
       {
	cout<<temp->data;
	n=n->next;
	 }
      }
      void insatbeg()
       {
	 node *temp;
	 temp=create(value);
	 temp->next=head;
	 head=temp;
	}
       void insatend()
	{
	 node *temp,p;
	 temp=create(value);
	 temp->next=NULL;
	 p=head;
	 while(p->next!=NULL)
	  {
	    p->next=p;
	   }
	    p->next=temp;
     }
	  void insatpos(v)
	   {
	    int c=1,;
	    node *temp,ptr;
	    while(temp!=NULL)
	     {
	       temp=temp->next;
	       c=c+1;
	       if(c<v-1)
	       break;
	      }
	      ptr->next=temp->next;
	      temp->next=ptr;
	     }
	     void  delatbeg()
	      {
	       node *temp;
	       if(temp==NULL)
		 {
		  cout<<"list is empty";
		 }
		else
		 {
	       temp=head;
	       head=temp->next;
	       delete temp;
	     }
	     void delatend()
	      {
	       node *temp,p;
	       p=head;
	       while(temp->next!=NULL)
		{
		 temp=temp->next;
		 }
		 delete p;
		 head=temp;
		 temp->next=NULL;
		  }
		}
		void delatpos(r)
		 {
		   node *a;
		   node *b;
		   b=head;
		   while(temp!=NULL)
		    {
		     if(temp->data==r)
		      {
		       while(b->next!=temp)
		       b=b->next;
		       b->next=temp->next;
		       a=temp;
		       delete a;
		      break;
		     }
		      temp=temp->next
		    }
		   }
		   void search(int s)
		    {
		      int c=0;
		      temp=head;
		      while(temp!=NULL)
		       {
		       c++;
		       if(temp->data==e)
			{
			 cout<<"position of node is"<<'t'<<c;
			}
			temp=temp->next;
		      }
		       if(c==0)
			{
			 cout<<"no node";
			}
			void reverse()
			 {
			  node *a,*b,*last;
			  temp=head;
			  b=last;
			  while(temp!=b)
			   {

			  if(temp->next=b)
			   {
			    b->next=temp;
			    b=temp;
			    temp=head;
			    continue;
			   }
			   temp=temp->next;
			  }
			  if(b==head)
			   {
			    temp->next=NULL;
			    temp=head;
			    head=last;
			    last=temp;
			   }
			}l;

    int main()
       {
	 clrscr();
	char ch;
	do
	 {
	   cout<<"1.create\n";
	   cout<<"2.display\n";
	   cout<<"3.insert at begining\n";
	   cout<<"4.insert at end\n";
	   cout<<"5.insert at pos\n";
	   cout<<"6.delete at begining\n";
	   cout<<"7.delete at end\n";
	   cout<<"8.delete at a pos\n";
	   cout<<"9.search a node\n";
	   cout<<"10.reverse a node\n";
	   cout<<"enter your choice:\n";
	   cin>>ch;
	    switch(ch)
	     {
	      case '1': cout<<"enter the list:";
			l.create(a);
			break;
	      case '2': cout<<"linked list:";
			l.display();
			break;
	      case '3':cout<<"insert at begining";
		       l.insatbeg();
		       break;
	      case '4':cout<<"insert at end";
		       l.insatend();
		       break;
	      case '5':cout<<"insert at pos";
		       l.insatpos(b);
		       break;
	      case '6':cout<<"del at begining";
		       l.delatbeg();
		       break;
	      case '7':cout<<"del at end";
		       l.delatend()
		       break;
	      case '8':cout<<"del at pos";
		       l.delatpos(n);
		       break;
	      case '9':cout<<" search a node";
		       l.search(m);
		       break;
	      case '10':cout<<"reverse a node";
			l.reverse()
			break;

	      default:cout<<"invalid input";
	   }
	 cout<<"do you want to continue:";
	 cin>>ch;
	}
	while(ch=='y');
	return 0;
	getch();
       }

