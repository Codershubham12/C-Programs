#include<stdio.h>
int main(){
int n,sum=0,r;

printf("enter a number");
scanf("%d",&n);
a:
while(n!=0)
{
    r=n%10;
    sum+=r;
    n=n/10;
    
}if(sum>9)
{
    n=sum;
    sum=0;
    goto a;
}else
printf("%d",sum);
    return 0;
}

