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
   }*head,*temp,*ptr,*s,*t;
   dll()
    {
      head=NULL;
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
      if(head==NULL)
	 {
	  cout<<"linked list is empty"<<endl;
	 }
       else
	{
	 cout<<"dispay the linked list"<<'\t';
	 ptr=head;
	 while(ptr!=NULL)
	  {
	   cout<<ptr->data<<'\t';
	  ptr=ptr->next;
	 }
	}
       }
       void insatbeg()
     {
      if(head==NULL)
	 {
	  ptr=head;
	  }
	else
	{
	 ptr->next=head;
	 ptr->prev=NULL;
	 head=ptr;
     }

	}
   void insatend()
    {
	ptr->next=NULL;
	if(head==NULL)
	{
		ptr->prev=NULL;
		}
	else
	 {
		s=head;
		while(s->next!=NULL)
	    {
	      s=s->next;
	      ptr->prev=s;
	      s->next=ptr;
	    }
	   }
	}
       void insatpos(int a)

	{
	  int c=0;
	  t=head;
	  while(t!=NULL)
	   {
	    c=c+1;
	    if(c==a-1)
	    break;
	    t=t->next;
	  }
	    ptr->next=t->next;
	    ptr->prev=t;
	    t->next->prev=ptr;
	    t->next=ptr;
	  }
	  void delatbeg()
	   {
	    if(head==NULL)
	     {
	      cout<<"no node present";
	      }
	    else
	     {
	       ptr=head;
	       head->next=head;
	       head->prev=NULL;
	       delete ptr;
	      }

	   }
	   void delatend()
	    {
	     if(head==NULL)
	      {
	       cout<<"no node present";
	       }
	    else
	     {
	      ptr=head;
	      while(ptr->next!=NULL)
	       {
		 ptr=ptr->next;
		}
		 if(head->next=NULL)
		  {
		      head==NULL;
		     }
		 else
		  {
		    ptr->prev->next=NULL;
		    delete ptr;
		   }
		 }
	       }
	     void delatpos(int v)
	      {
	       if(head==NULL)
		{
		 cout<<"no node";
	       }
	       ptr=head;
		while(ptr!=NULL)
		 {
		  if(ptr->data=v)
		   {
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
	int v,b,c,z,x,a;

	while(ch1=='y')
	{
		cout<<endl<<"select"<<endl;
		cout<<"1.insert at beginning"<<endl<<"2.insert at end"<<endl<<"3.insert at middle"<<endl;
		cout<<"4.delete from beginning"<<endl<<"5.delete from end"<<endl<<"6.delete from middle"<<endl;
		cout<<"7.search a node"<<endl<<"8.count no. of nodes"<<endl<<"9.reverse linked list"<<endl;
		cout<<"10.display linked list"<<'\t';
		cin>>c;
		if(c==1||c==2||c==3)
		{
			cout<<"enter data for node to insert"<<'\t';
			cin>>b;
		}
		dl.create(b);
		switch(c)
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
