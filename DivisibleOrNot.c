#include <stdio.h>

int main() {
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter the second integer:");
    scanf("%d",&b);
    if(a%b==0)
    {
        printf("%d is divisible by %d",a,b);
    }
    else
    {
        printf("%d is not divisible by %d",a,b);
    }
    return 0;
}
