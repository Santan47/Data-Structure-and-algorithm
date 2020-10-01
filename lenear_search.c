#include<stdio.h>
#include<stdlib.h>

int main()
{
int a[10],i,n,item,flag=0;
printf("Enter the nnumber of elements: ");
scanf("%d",&n);
printf("Enter the number of array: ");
for(i=0;i<n;i++)
  {
  scanf("%d ",&a[i]);
  }
printf("enter the item\n");
scanf("%d",&item);
for(i=0;i<n;i++)
{
if(a[i]==item)
{
printf("Number has been found. ");
flag=1;
}
}
if(flag==0)
{
printf("Number is not found in the array\n");
}
return 0;
}
