//edited by yash tiwari
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter a no. of rows n:");
	scanf("%d",&n);
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("%d",i+j);
		}
		printf("\n");
	}
	
}
