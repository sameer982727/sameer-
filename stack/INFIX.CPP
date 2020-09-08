#include<iostream.h>
#include<conio.h>
#include<string.h>
class stack
{
	public:
	char stack[100];
	int b,top;
	void push(char a)
	{
		top++;
		stack[top]=a;
	}
	stack()
	{
		top=-1;
		b=100;
	}
	void display()
	{
		cout<<" postfix expression>>>>"<<endl;
		while(top!=-1)
		{
			cout<<stack[top]<<'\t';
			top--;
		}

	}
	void postfix()
	{
		char save[10];
		int u=-1;
		while(top!=-1)
		{
			if(stack[top]=='(')
			{
				top--;
				continue;
			}
			else if((stack[top]!='(')&&(stack[top]!=')')&&(stack[top]!='+')&&(stack[top]!='-')&&(stack[top]!='*')&&(stack[top]!='/'))
			obj1.push(stack[top]);
			else if(stack[top]==')')
			{
				obj1.push(save[u]);
				u--;
			}
			else
			{
				u++;
				save[u]=stack[top];
			}
			top--;
		}
		while(obj1.top!=-1)
		{
			obj2.push(obj1.stack[obj1.top]);
			obj1.top--;
		}
		obj2.display();
	}


}obj,obj1,obj2;

void main()
{
	clrscr();
	char ch[100];
	cout<<"enter infix expresion(enclose the whole ex in round brackets i.e,-> '()'<-)"<<'\t';
	cin.getline(ch,100);
	strrev(ch);
	for(int i=0;ch[i]!='\0';i++)
	obj.push(ch[i]);
	obj.postfix();

	getch();
}

