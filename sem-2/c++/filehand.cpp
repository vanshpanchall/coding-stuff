#include<stdio.h>
#include<string.h>
int main()
{
	FILE*filePointer;
	char dataToBeWritten[50]
	   = "GeekforGeeks-A computer Science Portal for Geeks";
	    filePointer=fopen("GfgTest.txt","w");
	   if (filePointer==NULL)
	   {
	   	printf("GfgTest.c file failed to open.\n");
	   }
	   else{
	   	printf("The file is now opened.\n");
	   	if (strlen(dataToBeWritten)>0)
	   	{
	   		fputs(dataToBeWritten, filePointer);
	   		fputs("\n",filePointer);
		   }
	   }
	   fclose(filePointer);
	   printf("Data successfully written in file GfgTest.c\n");
	   printf("The file is now closed.");
	   return 0;
}
