#include<stdio.h>
int main()
{
int num;
FILE *fptr;
fptr = fopen("C:\\home\\santan\\dwe\\sks.txt","w");
if(fptr==NULL)
{
printf("error!");
return 1;
}
printf("enter number:");
scanf("%d",&num);
fprintf(fptr,"%d",num);
fclose(fptr);
return 0;
}
