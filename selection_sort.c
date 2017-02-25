#include<stdio.h>
int main()
{
int i,j,min,temp,a[5];
for(i=0;i<5;i++)
{scanf("%d",&a[i]);
}printf("unshorted array\n");
for(i=0;i<5;i++)
{printf("%d\t",a[i]);
}
for(i=0;i<5;i++)
{
min =i;
for(j=i+1;j<=5;j++)
{if(a[j]<a[min])
{temp=a[min];
a[min]=a[j];
a[j]=temp;
}}}
printf("after shorting\n");
for(i=0;i<5;i++)
{
printf("%d\t",a[i]);
}
return 0;
}
