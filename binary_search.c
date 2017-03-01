#include<stdio.h>
int main()
{
int n,item,j,l,u,temp,a[100],b[100],i,mid,m=0;
scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=1;j<=n-1;j++)
	{
		for(i=0;i<=n-1-j;i++)
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
        {
                b[i]=a[i];
        }

	scanf("%d",&item);
	l=0;
	u=n-1;
		while(l<=u)
		{
			mid=(l+u)/2;
			if(item==b[mid])
			{
			m=1;
			break;
			}
			else if(item<b[mid]){
			u=mid-1;
			break;}
			else
			l=mid+1;
		}

if(m==1)
printf("no is found\n");
else
printf("no is not found\n");
return 0;
}
