#include<stdio.h>
int main() {
    int sum=0,n;
    printf("enter n value:");
    scanf("%d",&n);
    while(n>=0)
    {
        sum+=n;
        n--;
    }
    printf("sum of the natural number%d",sum);
    return 0;
}
