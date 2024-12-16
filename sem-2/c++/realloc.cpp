#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *ptr;
	ptr=NULL;
	ptr=realloc(ptr,10);
	if (ptr !=NULL)
	printf("memory created successfully\n");
	return 0;
}
