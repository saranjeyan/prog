#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i,count=0;
printf("enter the n and k");
scanf("%d%d",&n,&k);
for(i=1;i<=n;i++)
{
printf("%d\t"i);
}
for(i=1;i<=k;i++)
{
count=count+i;
}
printf("Output:%d",count);
}
