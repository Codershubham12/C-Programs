#include<stdio.h>
int main(){
int n,sum=0,i;
printf("enter test data"); scanf("%d",&n);
if(n==0)printf("not a natural number\n");
printf("The first natural number is :");
for(i=1;i<=n;i++)
{
    sum+=i;
    printf("%d ",i);
}
printf("\nThe Sum of Natural Numbers upto %d terms :%d",n,sum);
    return 0;
}
