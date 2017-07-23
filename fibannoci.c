#include<stdio.h>
void main()
{
int i,n,a=0,b=1,c;
scantf("%d",&n);
printf("fibanocci series:");
for(i=1;i<=n;i++)
{
c=a+b;
a=b;
b=c;
}
printf("\n%d",a);
}
