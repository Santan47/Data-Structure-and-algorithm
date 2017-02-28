#include<stdio.h>
#define MAX 5

int stack[MAX],top=0,item;
void push();
void pop();
void display();
int main()
{
int ch;
while(1)
{
printf("enter choise \n 1.push \n 2.pop \n 3.display \n 4.exit \n");
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
defult: printf("invalid choise\n");
}
}
return 0;
}
void push()
{
if(top==MAX)
printf("overflow");
else
{
printf("enter the item\n");
scanf("%d",&item);
top=top+1;
stack[top]=item;
}}
void pop()
{
if(top==0)
printf("underflow\n");
else
{
item=stack[top];
top=top-1;
}
}
void display()
{
int i;
if(top==0)
printf("stack empty\n");
else
{
for(i=top;i>=1;i--)
{printf("%d",stack[i]);
}
}
}
