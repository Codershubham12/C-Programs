#include<stdio.h>
int main(){
    long n; int i;
    printf("enter a number");
    scanf("%ld",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0) 
        { printf("%ld a not prime",n); return 0;}
    }
    printf(" %ld prime",n);
       return 0;
}
