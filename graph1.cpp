#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[100][100],i,j,n;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter graph in matrix form");
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

    printf("\n adjucency matrix=\n");
    for(i=1;i<=n;i++)
    {
    	printf("\tv%d",i);
	}
	for(i=1;i<=n;i++)
	{
	    printf("\tv%d",i);
		for(j=1;j<=n;j++)
		{
			printf("\t %d",a[i][j]);
		}		
	for(i=1;i<=n;i++)
	{
		int in=0;
		int out=0;
		for(j=0;j<=n;j++)
		
		{
			in=in+a[j][i];
			out=out+a[i][j];
		}
		printf("\nv%d indegree=%d\t outdegree=%d\t",i,in,out);
	}
	}
}
