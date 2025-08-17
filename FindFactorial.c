#include<stdio.h>
int main()
{
   long n,f=1;
    printf("enter a number");
    scanf("%ld",&n);
    while(n!=0)
    {
        f=f*n;
        n--;
    }
    printf("factorial of %ld",f);
}
