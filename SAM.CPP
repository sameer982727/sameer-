#include<iostream.h>
#include<conio.h>

 class linklist
 {
  struct node
   {
    int dt;
    node *ptr;
   }*head,*first,*last;
   public:
   void create()
    {
     head=new node;
     cin>>head->dt;
     if(first==NULL)
      {
       first=last=head;
       }
      else
       {
	last->ptr=head;
	last=head;
       }
      }
      void display()
       {
	head=first;
	 if(first==NULL)
	  cout<<"no data in the list\n";
	 else if(head!=NULL)
       {
	    cout<<head->dt;
	    head=head->ptr;
	   }
	  }
      };
      int main()
       {
	 clrscr();
	linklist l;
	char ch;
	do
	 {
	   cout<<"1.create\n";
	   cout<<"2.display\n";
	   cout<<"enter your choice:\n";
	   cin>>ch;
	    switch(ch)
	     {
	      case '1': cout<<"enter the list:";
			l.create();
			break;
	      case '2': cout<<"linked list:";
			l.display();
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
