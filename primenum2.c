#include<stdio.h>
void main()
{
int n,m,x,y,flag;
scanf("%d%d",&n,&m);
for(i<n;i<=m;i++)
{
flag=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
flag=1;
break;
}
}
if(flag==0&&i!=1)
printf("%d\t",i);
}
}
