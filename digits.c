#include<stdio.h>
void main()
{
long long n;
int count=0;
scanf("%lld",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("%d",count);
}
