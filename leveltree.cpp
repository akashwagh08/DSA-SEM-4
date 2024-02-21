#include<stdio.h>
#include<stdlib.h>
#define MAX 50
struct node
{
 int data;
 struct node *left,*right;
};
struct que
{
 int front,rear;
 struct node *data2[MAX];
};
struct que q;
void init()
{
 q.front=q.rear=-1;
}
int isempty()
{
 if(q.front==q.rear)
  return 1;
 else
  return 0;
}
void add(struct node *temp)
{
 q.rear++;
 q.data2[q.rear]=temp;
}
struct node *deleq()
{
 return (q.data2[++q.front]);
}
struct node *create(struct node *root)
{
 int i,n;
 struct node *newnode,*temp,*parent;
 printf("enter limit");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  newnode=(struct node *)malloc(sizeof(struct node));
  printf("enter value");
  scanf("%d",&newnode->data);
  newnode->left=NULL;
  newnode->right=NULL;
  if(root==NULL)
  {
   root=newnode;
   continue;
  }
  temp=root;
  while(temp!=NULL)
  {
   parent=temp;
   if(newnode->data<temp->data)
     temp=temp->left;
   else
   temp=temp->right;
  }
  if(newnode->data <parent->data)
     parent->left=newnode;
  else
     parent->right=newnode;
 }
 return root;
}
void level(struct node *root)
{
 int cnt=0;
 struct node *temp;
 add(root);
 add(NULL);
 printf("level=%d",cnt);
 while(!isempty())
 {
  temp=deleq();
  if(temp==NULL)
  {
   cnt++;
   if(!isempty())
   {
    add(NULL);
    printf("\nlevel=%d \n",cnt);
   }
  }
  else
  {
   printf("%d\t",temp->data);
   if(temp->left!=NULL)
    add(temp->left);
   if(temp->right!=NULL)
    add(temp->right);
  }
 }
}
int main()
{
 struct node *root=NULL;
 root=create(root);
 level(root);
}
