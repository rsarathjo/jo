#include<stdio.h>
void main()
{
int n,r,sum=0,c;
scanf("%d",&n);
c=n;
while(n!=0)
{
r=n%10;
sum+=r*r*r*r;
n/=10;
}
if(sum==c)
{
printf("amstrong");
}
else
{
printf("not strong");
}
}
