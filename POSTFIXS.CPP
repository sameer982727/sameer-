#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
# define X 20
class stack
 {
  int arr[X];
  public:
  int top;
  stack()
   {
    top==-1;
   }
   void push(int b)
    {
     if(top==X)
      {
       cout<<"\n stack is full";
       }
      else
       {
	arr[top++]=b;
	}
      }
       int pop()
	{
	 if(top!=-1)
	  {
	    return arr[top--];
	 }
       }
      };
      void main()
       {
	clrscr();
	stack st;
	int len;
	int num1,num2;
	char s[100];
	char ch;
	cout<<"\n enter the postfix expression";
	gets(s);
	len=strlen(s);
	for(int i=0;i<len;i++)
	 {
	  switch(s[i])
	   {
	    case '+':cout<<"adding is performed";
		     num1=st.pop();
		     num2=st.pop();
		     st.push(num2+num1);
		     break;
	    case '-':cout<<" subtraction is performed";
		     num1=st.pop();
		     num2=st.pop();
		     st.push(num2-num1);
		     break;
	    case '*':cout<<" multipication is performed";
		     num1=st.pop();
		     num2=st.pop();
		     st.push(num2*num1);
		     break;
	    case '/':cout<<"division is performed ";
		     num1=st.pop();
		     num2=st.pop();
		     st.push(num2/num1);
		     break;
	    default:
		     st.push((s[i]));
	  }
	 }
	 cout<<"\n the result of expression is:"<<st.pop()<<"\n";
	   getch();
	}

