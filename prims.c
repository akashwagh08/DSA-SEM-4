#include<stdio.h>
#include<conio.h>
int a,b,u,v,n,i,j,ne=1;
int visited[100]={0},min ,sum=0,c[100][100];
void main()
{
	printf("enter number of node");
	scanf("%d",&n);
	printf("enter adjacency matrix\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&c[i][j]);
			if(c[i][j]==0)
			c[i][j]==99;
		}
	}
	visited[1]=1;
	printf("\n");
	for(ne=1;ne<=n;ne++)
	{
		for(i=1,min=99;i<=n;i++)
		for(j=1;j<=n;j++)
		if(c[i][j]<min&&visited[i]==0)
		{
			min=c[i][j];
			a=u=i;
			b=v=j;
		}
		if(visited[u]==0 ||visited[v]==0)
		{
			printf("\n edge %d:(%d->%d) cost:%d",ne++,a,b,min);
			sum=sum+min;
			visited[b]=1;
		}
		c[a][b]=c[b][a]=99;
	}
	printf("\n minimum cost=%d",sum);
}
