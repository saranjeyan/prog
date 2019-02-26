#include<stdio.h>
#include<conio.h>
void main()
{
int n,count=0;
printf("Input:");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++count;
}
printf("Output:%d",count);
}
