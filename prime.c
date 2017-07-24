#include<stdio.h>
void main()
{
int i,n j=0;
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%2==0)
{
j=1;
break;
}
}
if(j==0)
{
printf("prime");
}
else
{
printf("not prime");
}
}
