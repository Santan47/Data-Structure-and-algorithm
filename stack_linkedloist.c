#include<stdio.h>
#include<malloc.h>
void push();
void pop();
void display();
struct node
{
int info;
struct node *link;
}*top=NULL;
int main()
{
int ch;
while(1)
{
printf("enter your choise.\n1.push\n2.pop\n3.display\n4.exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:return 1;
defult:printf("invalid choise\n");
}
}
return 0;
}
void push()
{
int num;
struct node *temp;
temp=(struct node*) malloc(sizeof(struct node));
if(temp==NULL)
{
printf("linked list overflow\n");
return;
}
printf("enter the num");
scanf("%d",&num);
temp->info =num;
temp ->link=top;
top=temp;
}
void pop()
{
struct node *temp;
int num;
if(top==NULL)
{
printf("underflow\n"); 
return;
}
temp=top;
num=top->info;
top=top->link;
printf("deleted :%d\n",num);
}
void display()
{
struct node *ptr;
int num;
ptr=top;
if(top==NULL)
printf("stack empty\n");
while(ptr !=NULL)
{
printf("%d\n",ptr->info);
ptr=ptr->link;
}
}
