#include<stdio.h>
viod main()
{
int n,m,x,sum=0,y,i,k=0,r;
scanf(%d%d",&x,&y);
for(i=x;i<=y;i++)
{
sum=0;
k=i;
while(k!=0)
{
r=k%10;
k=k/10;
sum=sum+(r*r*r);
}
if(sum==i)
printf("%d\t", sum);

}
}
