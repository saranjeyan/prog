#include<stdio.h>
#include<conio.h>
void main()
{
int v,rv=0,rem,d;
printf("INPUT");
scanf("%d",&v);
d=v;
while(v!=0)
{
rem=v%10;
rv=rv*10+rem;
v=v/10;
}
if(d==rv)
printf("OUTPUT:YES");
else
printf("OUTPUT:NO");
}
