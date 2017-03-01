#include<stdio.h>
void quick(int a[],int n,int beg,int end,int *locptr)
{
int left,right,temp;
left=beg; right=end;
*locptr=beg;
step2:
while(a[*locptr]<=a[right]&&*locptr!=right)
right--;
if(*locptr==right)
return;
if(a[*locptr]>a[right])
{
temp=a[*locptr];
a[*locptr]=a[right];
a[right]=temp;
*locptr=right;
}
goto step3;
step3:
while(a[left]<=a[*locptr]&&left!=*locptr)
left++;
if(*locptr==left)
return;
if(a[left]>a[*locptr]){
temp=a[left];
a[left]=a[*locptr];
a[*locptr]=temp;
*locptr=left;
}
goto step2;
}
void quick_short(int a[],int n)
{
int loc;
int beg,end,top=-1;
int lower[n],upper[n];
if(n>1){
top++;
lower[top]=0;
upper[top]=n-1;
}
while(top!=-1){
beg=lower[top];
end=upper[top];
top--;
quick(a,n,beg,end,&loc);
if(beg<loc-1)
{
top++;
lower[top]=beg;
upper[top]=loc-1;
}
if(loc+1<end){
top++;
lower[top]=loc+1;
upper[top]=end;
}
}
}
int main()
{
int a[100],i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
quick_short(a,n);
for(i=0;i<n;i++)
{
printf(" %d",a[i]);
}
return 0;
}
