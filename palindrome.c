#include<stdio.h>
void main()
{
int n,i,j=0,x,y;
scanf("%d",&n);
y=n;
while(n!=0)
{
i=n%10;
j=j*10+y;
n/=10;
}
if(y==j)
{
printf("polindrome");
}
else
{
printf("not polindrome");
}
}
