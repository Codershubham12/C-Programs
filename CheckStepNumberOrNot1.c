#include <stdio.h>
#include <stdlib.h>
int main()
{
    long n; int r1,r2;
    printf("enter a number");
    scanf("%ld",&n);
    r1=n%10;
    n/=10;
    while(n!=0)
    {
        r2=n%10;
        
        if(r1-r2==1 || r1-r2==-1)
        r1=r2;
        else {printf("not a step number"); break;}
        n/=10;
    }
    if(n==0)
    {
        printf("it is step number");
    }
}
