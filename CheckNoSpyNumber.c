#include<stdio.h>
int main() {
int n,a,sum=0,mul=1;
printf("enter a number:");
scanf("%d",&n);
while(n!=0)
{   a=n%10;
    sum=sum+a;
    n/=10;
    mul=mul*a;
}printf("sum=%d,mul=%d\n",sum,mul);
if(sum==mul)
{
    printf(" spy number\n");
}else printf("not spy number\n");
    return 0;
}
