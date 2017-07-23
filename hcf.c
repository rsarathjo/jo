#include<stdio.h>
void main()
{
int a,b,c,hcf=0;
scanf("%d%d",&a,&b);
c=(a<=b)? a:b;
for(i=1;i<=c;i++)
{
if(a!%i==0&&b!%i==0)
{
hcf=i;
}
}
   printf("hcf of %d and %d = %d\n", a, b, hcf);
}
