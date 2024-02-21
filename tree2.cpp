#include<stdio.h>
#include<stdlib.h>
typedef struct node
 {
 	int data;
 	struct node *right,*left;

 }node;
 
 node *create(node *root)
 {
 	int i,n;
	struct node *temp,*newnode,*parent;
 	printf("enter limit");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 	  newnode=(node*)malloc(sizeof(node));
	   printf("enter no");
	   scanf("%d",newnode->data);
	   newnode->left=NULL;
	   newnode->right=NULL;
	   if(root==NULL)
	   {
	   	root=newnode;
	   }	
	temp=root;
	while(temp!=NULL) 
	{
		parent=newnode;
		if(newnode->data<temp->data)
		temp=temp->left;
		else
		temp=temp->right;
	}  
	if(newnode->data<parent->data)
	 parent->left=newnode;
	 else
	 parent->right=newnode; 
	}
	return root;
 }
 
 void inorder(node *root)
{
	node *temp=root;
	if(temp!=NULL)
	{
		inorder(temp->left);
		printf("%d\t",temp->data);
		inorder(temp->right);
	}
}

int main()
{
	node *root=NULL;
	root=create(root);
	printf("\n inorder display");
	inorder(root);
}
