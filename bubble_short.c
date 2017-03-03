#include<stdio.h>
int main()
{
int a[100],n,i,pass,temp,flag;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(pass=1;pass<=n-1;pass++)
{
	for(i=0;i<=n-1-pass;i++)
	{
	if(a[i]>a[i+1])
	{
		temp=a[i];
		a[i]=a[i+1];	
		a[i+1]=temp;
	}
	}
}
for(i=0;i<n;i++)
printf("%d",a[i]);
return 0;
}

