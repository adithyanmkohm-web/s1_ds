#include<stdio.h>
#include<stdlib.h>
void main()
{
int arr1[20],arr2[30];
int a,b,i,merge,j,temp,size=0;
printf("Enter the size of first array:");
scanf("%d",&a);
printf("The first array are:");
for(i=0;i<a;i++)
{
   scanf("%d",&arr1[i]);
}
printf("Enter the size of second array:");
scanf("%d",&b);
printf("The second array are:");
for(i=0;i<b;i++)
{
   scanf("%d",&arr2[i]);
}
merge=a+b;
for(i=a;i<merge;i++)
{
   arr1[i]=arr2[size];
   size++;
}
       for(i=0;i<merge;i++)
        {
	for(j=b;j<merge-1;j++)
	 {
	    if(arr1[j] > arr1[j+1])
	     {
	        temp=arr1[j];
	        arr1[j]=arr1[j+1];
	        arr1[j+1]=temp;
	      }
	      
            }
}
printf("Array elements are:\n");
for(i=0;i<merge;i++)
{
printf("%d\n",arr1[i]);
}
}
	 
