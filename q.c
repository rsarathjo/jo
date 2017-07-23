#include<stdio.h>
void main()
{
char c;
for(;;)
{
   printf( "\nPress any key, Q to quit: " );
scanf("%c",&c);
if(c=='Q')
break;
}
}
