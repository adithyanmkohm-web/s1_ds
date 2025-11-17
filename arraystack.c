#include <stdio.h>
void main()
{
int stack[10];
int ch,i,size,val,top=-1;
printf("Enter the size of the stack:");
scanf("%d",&size);
do
{
printf("\n MENU \n1.push \n2.pop \n3.Display \n4.Exit");
printf("\n Enter your choice (1-4):");
scanf("%d",&ch);
switch(ch)
{
case 1:
if(top==size-1)
printf("stack overflow");
else
{
top++;
printf("Enter value to push:");
scanf("%d",&val);
stack[top]=val;
printf("\n value pushed!");
}
break;
case 2:
if(top==-1)
printf("\nstack underflow");
else
{
val=stack[top];
printf("\n value popped is:%d",val);
top--;
}
break;
case 3:
if(top==-1)
printf("stack is empty");
else
{
printf("The stack is: ");
for(i=top;i>=0;i--)
printf("%d",stack[i]);
}
case 4:break;
default:printf("wrong choice");
}
}
while(ch!=4);
}
