#include<iostream.h>
#include<stdio.h>

class ol
{
	public:
		class node
		{
			public:
				int data;
				node *next;
		} *head,*last,*temp,*ptr;

		ol()
		{
			head=last=NULL;
		}
		~ol()
		{
			temp=head;
			while(head!=NULL)
			{
				temp=temp->next;
				delete head;
				head=temp;
			}
		}
		void create(int);
		void display();
		void deleteNode(int);
		void merge(ol);
};

void ol::create(int j)
{
	temp=new node;
	temp->data=j;
	temp->next=NULL;
	if(head==NULL)
	{
		head=last=temp;
	}
	else if(temp->data<=head->data)
	{
		temp->next=head;
		head=temp;
	}
	else if(temp->data>=last->data)
	{
		last->next=temp;
		last=temp;
	}
	else
	{
		ptr=head;
		while(ptr!=last)
		{
			if((temp->data>ptr->data)&&(temp->data<=ptr->next->data))
			{
				temp->next=ptr->next;
				ptr->next=temp;
			}
			ptr=ptr->next;
		}
	}
}

void ol::deleteNode(int m)
{
	temp=head;
	if(m==1)
	{
		temp=head;
		head=head->next;
		delete temp;
	}
	else
	 {
	for(int i=1;i<m-1;i++)
	{
		temp=temp->next;
	}
	ptr=temp->next;
	temp->next=ptr->next;
	delete ptr;
	cout<<"\n Node is Deleted ";
   }
}

void ol::display()
{
	temp=head;
	cout<<"\n LINKED LIST : ";
	while(temp!=NULL)
	{
		cout<<" "<<temp->data;
		temp=temp->next;
	}
}

void ol::merge(ol a)
{
	a.temp=a.head;
	while(a.temp!=NULL)
	{
		create(a.temp->data);
		a.temp=a.temp->next;
	}
}

int main()
{
	int ch,j,m,i=1;
	ol a,b;

	do
	{
		cout<<"\n -------------MAIN MENU----------------";
	    cout<<"\n 1. insert";
	    cout<<"\n 2. delete";
	    cout<<"\n 3. merge";
	    cout<<"\n 4. display";
	    cout<<"\n Enter you choice(0 to exit) : ";
	    cin>>ch;
	    switch(ch)
	    {
		case 1:
			cout<<"\n Enter the element : ";
			cin>>j;
			a.create(j);
			break;
		case 2:
			    cout<<"\n Enter the position from which the node is to be deleted : ";
				cin>>m;
				a.deleteNode(m);
				break;
			case 3:
			    cout<<"\n Enter the no. of nodes in the second list : ";
				cin>>m;
				while(m>0)
				{
					cout<<"\n Enter the element no. "<<i<<" : ";
					cin>>j;
				       a.create(j);
					i++;
					m--;
				}
				a.merge(b);
				break;
			case 4:
			    a.display();
				break;
			default:
			    break;
		}
	}while(ch!=0);
	return 0;
}

