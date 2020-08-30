#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class in
 {
  public:
  int stack[100];
  int top;
  in()
   {
    top=-1;
   }
  void push(int x)
   {
     if(top==100-1)
      {
       cout<<"stack is full";
       }
     else
      {
       top++;
       stack[top]=x;
      }
    }
    int pop()
     {
      if(top!=-1)
      return stack[top--];
     }
    };
   void main()
    {
     in i,i1,i2;
     int sum=0,o;
     cout<<"enter the first number";
     for(int i=0; o!= -1; i++)
      {
       cin>>o;
       if(o!=-1)
	{
	 i.push(o);
	}
       }
       o=0;
       cout<<"enter the second number";
       for(int j=0;o!= -1; j++)
	{
	 cin>>o;
	 if(o!=-1)
	  {
	   i1.push(o);
	  }
	 }
	 sum=0;
	 while(i.top!=-1&&i1.top!=-1)
	  {
	   sum=sum+i.pop()+i1.pop();
	   i2.push(sum%10);
	   sum=sum/10;
	 }
	 if(i.top!=-1)
	  {
	   while(i.top!=-1)
	    {
	     i2.push(sum+i.pop());
	     sum=0;
	   }
	  }
	  if(i1.top!=-1)
	   {
	    while(i1.top!=-1)
	     {
	      i2.push(sum+i1.pop());
	      sum=0;
	      }
	     }
	     if(sum!=0)
	      {
	       i2.push(sum);
	      }
	    }

