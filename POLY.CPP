#include<iostream.h>
#include<conio.h>
#include<math.h>
class pol
 {
  public:
  struct node
   {
     int co;
     int pow;
     node *next;
    }*head,*last,*temp,*ptr;
   void create(int c,int p)
    {
     temp=new node;
     temp->co=c;
     temp->pow=p;
     temp->next=NULL;
     if(head==NULL)
      {
       head=last=temp;
	}
      else
       {
	last->next=temp;
	last=temp;
	}
      }

	void display()
	 {
	   temp=head;
	   while(temp!=NULL)
	    {
	     if(temp->co>=0)
	      {
	       temp=temp->next;
	       }
	      if(temp->pow==0)
	       {
		cout<<temp->co;
	       }
	      else if(temp->pow==1)
	       {
		cout<<temp->co<<"x"<<temp->pow;
		}
	       else
		{
		 if(temp->co==0)
		  {
		   temp=temp->next;
		  }
		  if(temp->pow==0)
		   {
		   cout<<temp->co;
		   }
		   else if(temp->pow==1)
		    {
		     cout<<temp->co<<"x";
		   }
		   else
		    {
		     cout<<temp->co<<temp->pow;
		    }
		  }

		  temp=temp->next;
	      }
	     }
	  void sum(pol a)
	   {
	    int f;
	    a.ptr=a.head;
	    while(a.ptr)
	     {
	      ptr=head;
	      while(ptr)
	       {
		if(ptr->pow==a.ptr->pow)
		 {
		  ptr->co=ptr->co+a.ptr->co;
		    f=1;
		    break;
		  }
		 else
		  {
		    f=0;
		   }
		   ptr=ptr->next;
		  }
		  if(f==0)
		   {
		    create(a.ptr->pow,a.ptr->co);
		   }
		   a.ptr=a.ptr->next;
		 }
		 cout<<"sum:";
		 display ();
		}
	     };
	  int main()
	   {
	      clrscr();
	      pol a,b;
	      int c,d;
	      char ch;
	      do
	  {

	      cout<<"enter the coefficent";
	      cin>>c;
	      cout<<"enter the power";
	      cin>>d;
	      a.create(c,d);
	      cout<<"do you want to enter more";
	      cin>>ch;
	   }
          while(ch=='y'||ch=='Y');
	  a.display();
         do
       {
	   cout<<"enter the coefficent";
	   cin>>c;
	   cout<<"enter the power";
	   cin>>d;
	   b.create(c,d);
	   cout<<"do you want to enter more";
	   cin>>ch;
	 }
       while(ch=='y'||ch=='Y');
       b.display();
       cout<<"the sum is:";
       a.sum(b);
       getch();
	   }
