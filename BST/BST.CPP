#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
 {
  int data;
  node *left;
  node *right;
 }*root;
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
      };
     void main()
      {
       clrscr();
	int ch,a;
	bst b;
	node *temp;
	do
	 {
	  cout<<"\n 1.insert \n 2.Recursive Preorder \n 3.Recursive Postorder \n 4.Recursive Inorder"<<endl;
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
	    default: cout<<"wrong choice"<<endl;
		  }
	       }while(ch!=0);
	     }
