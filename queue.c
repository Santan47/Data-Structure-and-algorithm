#include<stdio.h>
#define max 5
void insert();
void delete();
void display();
int queue[max],rear=0,front=0,item,ch,i;
int main()
{
while(1)
{
printf("enter your choise\n1. insert\n2. delete\n3.display\n4.exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:insert();
break;
case 2:delete();
break;
case 3:display();
break;
case 4:return 1;
defult: printf("invalid choise\n");
}
}
return 0;
}
void insert()
{
if(rear==max)
printf("overflow\n");
if(front==0)
{
front=1;
}
else
{
rear=rear+1;
printf("item ?\n");
scanf("%d",&item);
queue[rear]=item;
}
}
void delete()
{
if(front==0||front>rear)
printf("underflow\n");
else
{
item=queue[front];
front=front+1;
}
}
void display()
{
if(front==0||front>rear)
printf("queue is empty\n");
else
{
for(i=front;i<=rear;i++)
{
printf("%d",queue[i]);
}
}
}

