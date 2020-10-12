#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
 {
  int data;
  node *left;
  node *right;
 }*root;
  class stack
     {
      node* st[50];
      int top,b;
      public:
       stack()
	{
	 top=-1;
	}
	void push(node *e)
	 {
	  if(top==49)
	   {
	   cout<<"stack is full";
	  }
	 else
	  {
	   top++;
	   st[top]=e;
	  }
	}
	 node *pop()
	  {
	   if(top==-1)
	    {
	     cout<<"stack is empty";
	     }
	   else
	    {
	     return  (st[top--]);
	    }
	  }
	  int isempty()
	   {
	    if(top==-1)
	       return 1;
	    else
	      return 0;
	   }
	};
class bst
 {
  public:
  bst()
   {
    root=NULL;
    }
  void insert(node *tree,node*ptr)
   {
    if(root==NULL)
     {
      root=new node;
      root->data=ptr->data;
      root->left=NULL;
      root->right=NULL;
      cout<<endl;
    }
     if(tree->data==ptr->data)
      {
       cout<<"element is present"<<endl;
       }
     if(tree->data> ptr->data)
      {
       if(tree->left !=NULL)
	{
	 insert(tree->left, ptr);
	 }
       else
	{
	 tree->left=ptr;
	 (tree->left)->left=NULL;
	 (tree->left)->right=NULL;
	  cout<<"node is added"<<endl;
	 }
       }
      else
       {
	if(tree->right !=NULL)
	 {
	  insert(tree->right,ptr);
	  }
	  else
	   {
	    tree->right=ptr;
	    (tree->right)->left=NULL;
	    (tree->right)->right=NULL;
	    cout<<"node is added"<<endl;
	   }
	  }
	 }
     void recursivepreorder(node *a)
      {
       if(root==NULL)
	{
	 cout<<"tree is empty"<<endl;
	 }
	 if(a!=NULL)
	  {
	   cout<<a->data;
	  recursivepreorder(a->left);
	  recursivepreorder(a->right);
	  }
	}
     void recursivepostorder(node *a)
      {
	if(root==NULL)
	 {
	  cout<<"tree is empty"<<endl;
	  }
	if(a!=NULL)
	 {
	  recursivepostorder(a->left);
	  recursivepostorder(a->right);
	  cout<<a->data;
	 }
	}
       void recursiveinorder(node *a)
	{
	 if(root==NULL)
	  {
	   cout<<"tree is empty"<<endl;
	   }
	  if(a!=NULL)
	   {
	    recursiveinorder(a->left);
	    cout<<a->data;
	    recursiveinorder(a->right);
	  }
	}
      void search(int data)
       {
	 if(root==NULL)
	  {
	   cout<<"Tree is empty";
	  }
	 else
	  {
	   node *temp;
	   temp=new node;
	   temp=root;
	   while(temp!=0)
	    {
	     if(temp->data==data)
	      {
	       cout<<"data is present";
	       return;
	       }
	     else if(data<temp->data)
	      {
	       temp=temp->left;
	       }
	     else if(data>temp->data)
	      {
	       temp=temp->right;
	      }
	     }
	     cout<<"element is not present";
	  }
     }
     void itepreorder(node *ptr)
      {
	stack s;
	if(ptr!=NULL)
	 {
	  s.push(ptr);
	  while(!s.isempty())
	   {
	     ptr=s.pop();
	     cout<<ptr->data;
	     if(ptr->right!=NULL)
	      {
	       s.push(ptr->right);
	       }
	     if(ptr->left!=NULL)
	       {
	       s.push(ptr->left);
	       }
	    }

	    }
	     }
	  void iteinorder(node *ptr)
	   {
	    stack s;
	    while(ptr!=NULL)
	     {
	      while(ptr!=NULL)
	       {
		if(ptr->right!=NULL)
		 {
		  s.push(ptr->right);
		  }
		  s.push(ptr);
		  ptr=ptr->left;
		 }
		 ptr=s.pop();
		 while(!s.isempty()&&ptr->right==NULL)
		  {
		   cout<<ptr->data;
		   ptr=s.pop();
		  }
		  cout<<ptr->data;
		  if(!s.isempty())
		    {
		     ptr=s.pop();

		     }
		  else
		   {
		    ptr=NULL;
		  }
	      }
	  }
	  void height(node *ptr)
	   {
	     int g=0,h=0,q;
	     if(ptr!=NULL)
	       {
		g=height(ptr->left);
		h=height(ptr->right);
		if(g>h)
		{
		 q=g+1;
		 cout<<"height="<<q;
		}
	      else
	       {
		q=h+1;
		cout<<"height="<<q;
	       }
	     }
	   }
	       };

     void main()
      {
       clrscr();
	int ch,a,data;
	bst b;
	node *temp;
	do
	 {
	  cout<<"\n 1.insert \n 2.Recursive Preorder \n 3.Recursive Postorder \n 4.Recursive Inorder \n 5. Search \n 6.Iterative preorder \n 7.iterative inorder \n 8.height"<<endl;
	  cout<<"enter the choice";
	  cin>>ch;
	  switch(ch)
	   {
	    case 1:
		    temp=new node;
		    cout<<"enter the number to be inserted:";
		    cin>>temp->data;
		    b.insert(root,temp);
		    break;
	    case 2:cout<<"recursive preorder of bst"<<endl;
		   b.recursivepreorder(root);
		   cout<<endl;
		   break;
	    case 3:cout<<"recursive postorder of bst"<<endl;
		   b.recursivepostorder(root);
		   cout<<endl;
		   break;
	    case 4:cout<<"recursive inorder of bst"<<endl;
		   b.recursiveinorder(root);
		   cout<<endl;
		   break;
	    case 5:cout<<"enter the element to be searched";
		   cin>>data;
		   b.search(data);
		   cout<<endl;
		   break;
	    case 6:cout<<"iterative preorder"<<endl;
		   b.itepreorder(root);
		   break;
	    case 7:cout<<"iterative inorder"<<endl;
		   b.iteinorder(root);
		   break;
	    case 8:cout<<"height of bst"<<endl;
		   b.height(root);
		   break;
	    default: cout<<"wrong choice"<<endl;
	     }
	      }while(ch!=0);
	 }