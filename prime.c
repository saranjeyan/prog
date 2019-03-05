#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,prime=1;
printf("INPUT");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
prime=0;
}
}
if(prime==1)
{
printf("OUTPUT:YES");
}
else
printf("OUTPUT:NO");
}
