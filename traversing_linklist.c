#include<stdio.h>
#include<stdlib.h>
struct node
{ int info;
struct node *link;
}*start=NULL;
int main()
{
struct node *temp;
struct node *new;
int num,n,info,i;
printf("enter no of linklist");
scanf("%d",&n);
start=(struct node*)malloc(sizeof(struct node));
if(start==NULL)
{
printf("empty memory.");
}
else
{
printf("enter the node 1.");
scanf("%d",&info);
start->info=info;
start->link=NULL;
temp=start;
for(i=2;i<=n;i++)
{
new=(struct node*)malloc(sizeof(struct node));
if(new==NULL){
printf("empty");
break;
}
else
{
printf("enter the info of node %d:",i);
scanf("%d",&info);
new->info=info;
new->link=NULL;
temp->link=new;
temp=temp->link;
}
}
}
if(start==NULL){
printf("linkedlist is empty.");
}
else{
temp=start;
while(temp!=NULL){
printf("info =%d\n",temp->info);
temp=temp->link;
}
}
return 0;
}
