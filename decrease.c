#include<stdio.h>//4321 432 43 1
main()
{
	int i,j,n;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			for(j=n;j>=i;j--)
			{
				printf("%3d",j);
			}
			printf("\n");
		}
}