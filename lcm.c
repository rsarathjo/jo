#include <stdio.h>
int main()
{
    int a, b, i, gcd, lcm;
printf("Enter two positive integers: ");
scanf("%d %d",&a,&b);
for(i=1; i <= a && i <= b; ++i)
{
        if(a%i==0 && b%i==0)
            gcd = i;
    }

    lcm = (a*b)/gcd;
    printf("The LCM of two numbers %d and %d is %d.", n1, n2, lcm);

    return 0;
}
