#include<iostream.h>
#include<conio.h>
class dll
 {
   public:
   struct node
   {
    int data;
    node *next;
    node *prev;
   }*head,*temp,*ptr,*t,*tail;
    dll()
    {
      head=NULL;
      tail=NULL;
     }
     void create(int value)
	 {
	     temp=new node;
	     temp->data=value;
	     temp->prev=NULL;
	     temp->next=NULL;
     }
    void display()
     {
      ptr=head;
      if(head==NULL)
	 {
	  cout<<"linked list is empty"<<endl;
	 }
      else
	{
	 cout<<"dispay the linked list";
      while(ptr!=NULL)
	  {
	   cout<<ptr->data;
	   ptr=ptr->next;
	 }
	}
       }
       void insatbeg()
     {
      if(head==NULL)
	 {
	  head=tail=temp;
	}
      else
	{
	 temp->next=head;
	 temp->prev=tail;
	 head=temp;
	 tail->next=head;

     }

   }
   void insatend()
    {
      if(tail==NULL)
	head=tail=temp;
      else
	{
	 tail->next=temp;
	 tail=temp;
	 temp->next=head;
	 head->prev=tail;
	}
       }
       void insatpos(int a)
	{
	  int c=0;
	  ptr=head;
	while(ptr!=NULL)
	   {
	    c=c+1;
	if(c==a-1)
	    break;
	    ptr=ptr->next;
	  }
	    temp->next=ptr->next;
	    temp->prev=ptr;
	    ptr->next->prev=temp;
	    ptr->next=temp;
	  }
	  void delatbeg()
	   {
	    if(head==NULL)
	     {
	      cout<<"no node present";
	      }
	    else if(head==tail)
	     {
	       t=head;
	       delete t;
	       head=tail=NULL;

	      }
	       else
	       {
		ptr=head;
		head=ptr->next;
		tail->next=head;
		head->prev=tail;
		delete ptr;
	   }
	   void delatend()
	    {
	     if(tail==NULL)
	      {
	       cout<<"no node present";
	       }
		 else if(head==tail)
		  {
		   t=head;
		   delete t;
		   head=tail=NULL;
	       }
	       else
	       {
		      ptr=tail;
		      while(ptr->next!=tail)
		      ptr=ptr->next;
		      ptr->next=head;
		      tail=ptr;
		      head->prev=tail;
		      delete ptr;
		}
	     }
	  void delatpos(int v)
	      {
		ptr=head;
		while(ptr!=NULL)
		   {
		    if(ptr->data=v)
		    ptr->prev->next=ptr->next;
		    ptr->next->prev=NULL;
		    delete ptr;
		  }
		 }
	       }
	       void count()
		{
		 int c=0;
		 ptr=head;
		 while(ptr!=NULL)
		  {
		    ptr=ptr->next;
		    c++;
		   }
		  cout<<"no of nodes are"<<c;
		 }

	void search()
		{
		 int c=0,o;
		 cout<<"enter the node to searched";
		 cin>>o;
		 ptr=head;
		 while(ptr!=NULL)
		  {
		   c++;
		   if(ptr->data==o)
			    {
				    break;
			   }
			ptr=ptr->next;
		 }
		 if(c==0||ptr==NULL)
		 cout<<"node does not exist";

	       }
}dl;

void main()
{
	clrscr();
	char ch1='y';
	int v,b,d,z,x,a;

	while(ch1=='y')
	{
		cout<<endl<<"option"<<endl;
		cout<<"1.insert at beginning"<<endl<<"2.insert at end"<<endl<<"3.insert at pos"<<endl;
		cout<<"4.delete at beginning"<<endl<<"5.delete at end"<<endl<<"6.delete at pos"<<endl;
		cout<<"7.search a node"<<endl<<"8.count no. of nodes"<<endl<<"9.display the linklist"<<endl;
		cin>>d;
		if(d==1||d==2||d==3)
		{
			cout<<"enter data for node to insert"<<'\t';
			cin>>b;
		}
		dl.create(b);
		switch(d)
		{
			case 1:	dl.insatbeg();
				dl.display();
				break;
			case 2:	dl.insatend();
				dl.display();
				break;
			case 3: cout<<"enter place at which you want to insert"<<'\t';
				cin>>z;
				dl.insatpos(z);
				dl.display();
				break;
			case 4:	dl.delatbeg();
				dl.display();
				break;
			case 5:	dl.delatend();
				dl.display();
				break;
			case 6:	cout<<endl<<"enter data of node you want to delete"<<'\t';
				cin>>x;
				dl.delatpos(x);
				dl.display();
				break;
			case 7:	dl.search();
				break;
			case 8:	dl.count();
				break;
			case 9:dl.display();
				break;
			default:cout<<"select our option"<<endl;
		}
		cout<<endl<<"enter y to go back to  menu"<<'\t';
		cin>>ch1;
	}
	getch();
}
