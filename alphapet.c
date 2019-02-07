#include<stdio.h>
void main()
{
char c;
printf("INPUT\n");
scanf("%c",&c);
if((c>='a' && c<='z') || (c>='A' && c<='Z'))
{
printf("OUTPUT:Alphapet\n");
}
else
{
printf("OUTPUT:NO");
}
}
