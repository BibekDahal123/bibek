#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	int n,i;
	printf("Enter a number of elements:\n");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("Memory allocation failed..\n");
		exit(0);
	}
	else
	{
		printf("Memory allocated successfully..\n");
		for(i=0;i<n;i++)
		{
			p[i]=i+1;
		}
		printf("The elements are:\n");
		for(i=0;i<n;i++)
		{
			printf("%d, ",p[i]);
		}
	}
}
