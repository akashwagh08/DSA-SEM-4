#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int i,j,a,b,u,v,n,ne=1;
int min,mincost=0,cost[9][9],parent[9];
int find(int);
int check(int,int);
void main()
{
	printf("\n implementation of kruskal algorithm\n");
	printf("\n enter the no of vertices");
    scanf("%d",&n);
    printf("\n enter the cost adjacency matrix\n");
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=n;j++)
    	{
    		scanf("%d",&cost[i][j]);
    		if(cost[i][j]==0)
    		cost[i][j]=999;
		}
	}
	printf("the edge of minimum costspanning tree are\n");
	for(ne=1;ne<=n;ne++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(cost[i][j]<min)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;
					
				}
			}
		}
		u=find(u);
		v=find(v);
		if(check(u,v)==1)
		{
			 printf("%dedge(%d,%d)=%d\n,ne,a,b,min");
			mincost+=min;
		}
		cost[a][b]=cost[b][a]=999;
	}
	printf("\n minimum cost=%d\n",mincost);
}
int find(int i)
{
	while(parent[i])
	i=parent[i];
	return i;
	
}
int check(int u,int v)
{
	if(u!=v)
	{
		parent[v]=u;
		return i;
		
	}
	return 0;
}
