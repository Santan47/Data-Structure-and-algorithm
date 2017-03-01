#include<stdio.h>
int main()
{
int a[10],i,n,item,flag=0;
printf("enter the no of elements");
scanf("%d",&n);
printf("enter the no of array");
for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
printf("enter the item\n");
scanf("%d",&item);
for(i=0;i<n;i++)
{
if(a[i]==item)
{
printf("no is found");
flag=1;
}
}
if(flag==0)
{
printf("number is not found in the array\n");
}
return 0;
}
