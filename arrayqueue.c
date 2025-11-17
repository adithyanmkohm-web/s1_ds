#include<stdio.h>
void main()
{
int queue[10];
int ch,i,size,val,front=-1,rear=-1;
printf("Enter the size of the queue:");
scanf("%d",&size);
do
{
printf("\n MENU \n1.Insert \n2.Delete \n3.Display \n4.Exit");
printf("\n Enter your choice (1-4):");
scanf("%d",&ch);
switch(ch)
{
case 1:
if(rear==size-1)
{
printf("queue full!");
}
else if(front==-1 && rear==-1)
{
front++;
rear++;
printf("Enter value to insert:");
scanf("%d",&val);
queue[rear]=val;
printf("\n value inserted!");
}
else
{
rear++;
printf("Enter value to insert:");
scanf("%d",&val);
queue[rear]=val;
printf("\n value inserted!");
}
break;
case 2:
if(front==-1 && rear==-1)
printf("\n queue empty!");
else if(front==rear)
{
val=queue[front];
printf("\n value deleted is:%d",val);
front=-1;
rear=-1;
}
else
{
val=queue[front];
printf("\n value deleted is:%d",val);
front++;
}
break;
case 3:
if(front==-1 && rear==-1)
printf("queue is empty");
else
{
printf("The queue is: ");
for(i=front;i<=rear;i++)
printf("%d",queue[i]);
}
case 4:break;
default:printf("wrong choice");
}
}
while(ch!=4);
}
