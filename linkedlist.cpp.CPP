#include<iostream.h>
#include<conio.h>
class linklist
{
	public:
	struct node
	{
		int data;
		node *next;
	}*head,*s,*ptr,*tail,*temp,*start,*last,*p,*rear;
	void create(int n)
	{
		ptr=new node;
		ptr->data=n;
		ptr->next=NULL;
	}
	void display()
	{
		if(head==NULL)
		cout<<"linked list is empty"<<endl;
		else
		{
			cout<<"displaying your linked list->->->"<<'\t';
			temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<'\t';
				temp=temp->next;
			}
		}

	}
	linkedkist()
	{
		last=NULL;
		head=NULL;
	}
	void insatbeg()
	{
		if(head==NULL)
		head=last=ptr;
		else
		{
			ptr->next=head;
			head=ptr;
		}
	}
	void insatend()
	{
		if(last==NULL)
		start=last=ptr;
		else
		{
			last->next=ptr;
			last=ptr;
		}
	}
	void insatpos(int v)
	{
		int c=0;
		temp=head;
		while (temp!=NULL)
		{
			c=c+1;
			if(c==v-1)
			break;
			temp=temp->next;
		}
		ptr->next=temp->next;
		temp->next=ptr;
	}
	void delatbeg()
	{
		if(head==NULL)
		cout<<"already empty"<<endl;
		else if(head==last)
		{
			p=head;
			delete p;
			head=last=NULL;
		}
		else
		{
			temp=head;
			head=temp->next;
			delete temp;
		}
	}
	void delatend()
	{
		if(last==NULL)
		cout<<"already empty"<<endl;
		else if(head==rear)
		{
			p=start;
			delete p;
			head=last=NULL;
		}
		else
		{
			temp=head;
			while(temp->next!=last)
			temp=temp->next;
			temp->next=NULL;
			last=temp;
		}
	}
	void delatpos(int o)
	{
		node *s;
		p=head;
		temp=head;
		while(temp!=NULL)
		{
			if(temp->data==o)
			{
				while(p->next!=temp)
				p=p->next;
				p->next=temp->next;
				s=temp;
				delete s;
				break;
			}
			temp=temp->next;
		}
	}
	void search(int sc)
	{
		int c=0;
		temp=head;
		while(temp!=NULL)
		{
			c++;
			if(temp->data==sc)
			{
				cout<<"this node is at position:"<<'\t'<<c;
				break;
			}
			temp=temp->next;
		}
		if(c==0||temp==NULL)
		cout<<"node does not exist";
	}
	void count()
	{
		int c=0;
		temp=head;
		while(temp!=NULL)
		{
			c++;
			temp=temp->next;
		}
		cout<<"no.of nodes:"<<'\t'<<c;
	}
	void reverse()
	{
		node *s;
		temp=head;
		p=last;
		while(temp!=p)
		{
			if(temp->next==p)
			{
				p->next=temp;
				p=temp;
				temp=head;
				continue;
			}

			temp=temp->next;
		}
		if(p==start)
		temp->next=NULL;
		temp=head;
		head=last;
		last=temp;


	}

};



    int main()
       {
	 clrscr();
	 linklist l;
	 int x,y,z,u;
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
			l.create(x);
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
		       l.insatpos(y);
		       break;
	      case '6':cout<<"del at begining";
		       l.delatbeg();
		       break;
	      case '7':cout<<"del at end";
		       l.delatend();
		       break;
	      case '8':cout<<"del at pos";
		       l.delatpos(z);
		       break;
	      case '9':cout<<" search a node";
		       l.search(u);
		       break;
	      case '10':cout<<"reverse a node";
			l.reverse();
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

