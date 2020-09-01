#include<iostream.h>
#include<conio.h>
#include<string.h>
class sta
 {
  public:
  char arr[100];
  int top;
  sta()
   {
    top=-1;
     }
   void push(char a)
    {
      if(top==100-1)
       {
	cout<<"stack is full";
	}
       else
	{
	  top++;
	  arr[top]=a;
	  }
	}
       void display()
	{
	 cout<<"postfix expression"<<"\n";
	 while(top!=-1)
	  {
	   cout<<arr[top];
	   top--;
	   }
	 }
       void pofix()
	{
	 char stac[50];
	 int s=1;
	 while(top!=-1)
	  {
	   if(arr[top]=='(')
	    {
	     top--;
	     continue;
	    }
	  else if((arr[top]!='(')&&(arr[top]!=')')&&(arr[top]!='+')&&(arr[top]!='-')&&(arr[top]!='*')&&(arr[top]!='/'))
	    {
	      s1.push(arr[top]);
	      }
	   else if(arr[top]==')')
	    {
	     s1.push(stac[s]);
	     s--;
	     }
	   else
	    {
	      s++;
	      stac[s]=arr[top];
	     }
	     top--;
	   }
	   while(s1.top!=-1)
	    {
	     s2.push(s1.arr[s1.top]);
	     s1.top--;
	    }
	   s2.display();
	  }
	}s1,s2,s3;
       void main()
	{
	 clrscr();
	 char x[100];
	 cout<<" \n enter the infix expression in ( ) \n ";
	 cin.getline(x,100);
	 strrev(x);
	 for(int i=0;x[i]!='\0';i++)
	  {
	   s3.push(x[i]);
	  }
	   s3.pofix();
	   getch();
      }