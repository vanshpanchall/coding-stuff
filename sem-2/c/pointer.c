#include <stdio.h> 
#include <conio.h>
int *getarray(int *arr,int n) 
{ 
 int i,j,temp;
 for (i = 0; i < n; ++i) 
 {
 for (j = i + 1; j < n; ++j)
 {
 if (arr[i] > arr[j]) 
 {
 temp = arr[i];
 arr[i] = arr[j];
 arr[j] = temp;
 }
 }
 } 
 return arr; 
} 
void main() 
{ 
 int *sortarray; 
 int array[5];
 int sizeArray;
 printf("Enter the five elements in an array : "); 
 for(int i=0;i<5;i++) 
 { 
 scanf("%d", &array[i]); 
 } 
 
 sizeArray = (sizeof(array) / sizeof(array[0]));
 
 sortarray = getarray(array,sizeArray);// Pass array to function 
 
 printf("\nElements of array are :"); 
 for(int i=0;i<5;i++) 
 { 
 printf("\n%d", sortarray[i]); 
 } 
 getch(); 
}