#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*head,*temp,*n;
void insertatpos(int,int);
void display();
int count();
int main()
{
int ch;
int val,pos;
do
{
printf("\nMENU:\n1.Insert\n2.Display\n3.Exit");
printf("\nEnter your choice:`");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("Enter value to insert:");
scanf("%d",&val);
printf("Enter position to insert:");
scanf("%d",&pos);
insertatpos(val,pos);
break;
case 2: display();
break;
case 3: break;
default: printf("Invalid choice!");
}
}while(ch!=3);
}
void insertatpos(int val,int pos)
{
int c,i;
c=count();
if(pos>c+1)
{
printf("position does not exit");
}
else
{
if(pos==1)
{
n=(struct node*)malloc(sizeof(struct node));
n->next=head;
n->data=val;
head=n;
}
else if(pos==(c+1))
{
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
n=(struct node*)malloc(sizeof(struct node));
n->next=NULL;
n->data=val;
temp->next=n;
}
else
{
i=2;
temp=head;
while(temp->next!=NULL&&i<=(pos-1))
{
i++;
temp=temp->next;
}
n=(struct node*)malloc(sizeof(struct node));
n->next = temp -> next;
n->data =val;
temp->next=n;
}
}
}
int count()
{
int count=0;
if(head==NULL)
count=0;
else
{
temp=head;
while(temp!=NULL)
{
count++;
temp = temp->next;
}
}
return count;
}
void display()
{
if(head==NULL)
{
printf("Empty linked list");
}
else
{
temp=head;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}
}
