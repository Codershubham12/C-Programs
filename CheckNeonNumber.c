#include<stdio.h>
int main() {
    int n,sum=0;
    printf("enter n number");
    scanf("%d",&n); // 9 
    int mul = n*n;
    while(mul!=0)
    {
        int rem = mul % 10;
        sum+=rem; 
        mul=mul/10;
    }
    if(n == sum)
        printf("%d the number is neon ",sum);
    else
        printf("not neon");
    return 0;
}
