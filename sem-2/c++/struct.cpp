#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr,sum=0;
	printf("enter no of elements:");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("Error!!");
		exit(0); 
	}
	else
	{
	printf("Enter Elements:\n");
    }
    for(i=0;i<n;i++)
    {
    	scanf("%d\n",&ptr[i]);
	}
	for(i=0;i<n;i++)
	{
	
		printf("%d\n",ptr[i]);
	}
	return 0;
}
