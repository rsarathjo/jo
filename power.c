#include<stdio.h>
void main()
{
int base,exponent,i=1;
scanf("%d",&base);
scanf("%d",&expoent);
while(exponent!=0)
{
i*=base;
exponent--;
}
printf("%d",i);
}
