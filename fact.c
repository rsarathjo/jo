#include<stdio.h>
void main()
{
int i,n,fact=1;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%dthe factorial is ",fact);
}
