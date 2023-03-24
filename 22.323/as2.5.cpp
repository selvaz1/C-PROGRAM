#include<stdio.h>

int main()

{
	int i,j,n;
	printf("Enter number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)

	{
		for(j=n;j>i;j--)

		{
			printf(" ");

		}
         for(j=i;j>=i;j--)      
		{
			printf("%d ",j);

		}

	printf("\n");

	}
	return 0;
}

