#include<stdio.h>
void swap(int*,int*);
void main()
{
int n1,n2;
scanf("%d%d",&n1,&n2);
printf("\nenter th before swap are n1=%d,n2=%d",n1,n2);
swap(n1,n2);
printf("\n enter th after swap are n1=%d,n2=%d",n1,n2);
}
void swap(int *x, int *y)
{
   *x = *x ^ *y;
   *y = *x ^ *y;
   *x = *x ^ *y;
   }
   
