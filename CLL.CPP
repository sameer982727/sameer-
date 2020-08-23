#include<iostream.h>
#include<conio.h>
class linklist
{
	public:
	struct node
	{
		int data;
		node *next;
	}*head,*s,*ptr,*temp,*last,*p;
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
			last->next=head;
		      }
	}
	void insatend()
	{
		if(last==NULL)
		head=last=ptr;
		else
		{
			last->next=ptr;
			last=ptr;
			last->next=head;
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
		last->next=head;
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
			last->next=head;
			delete temp;
		}
	}
	void delatend()
	{
		if(last==NULL)
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
			temp->next=head;
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
		if(p==head)
		temp->next=NULL;
		temp=head;
		head=last;
		last=temp;


	}

}l;


void main()
{
	clrscr();
	char ch1='y';
	int x,c,d,j,k;
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
			cin>>x;
		}
		l.create(x);
		switch(c)
		{
			case 1:	l.insatbeg();
				l.display();
				break;
			case 2:	l.insatend();
				l.display();
				break;
			case 3: cout<<"enter place at which you want to insert"<<'\t';
				cin>>d;
				l.insatpos(d);
				l.display();
				break;
			case 4:	l.delatbeg();
				l.display();
				break;
			case 5:	l.delatend();
				l.display();
				break;
			case 6:	cout<<endl<<"enter data of node you want to delete"<<'\t';
				cin>>j;
				l.delatpos(j);
				l.display();
				break;
			case 7:	cout<<"enter the data of node you want to search"<<'\t';
				cin>>k;
				l.search(k);
				break;
			case 8:	l.count();
				break;
			case 9:	l.reverse();
				l.display();
				break;
			case 10:l.display();
				break;
			default:cout<<"select from 1-10"<<endl;
		}
		cout<<endl<<"enter y to go back to  menu"<<'\t';
		cin>>ch1;
	}
	getch();
}
