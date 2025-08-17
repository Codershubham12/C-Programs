#include<stdio.h>
int main(){
int n,sum=0,r;

printf("enter a number");
scanf("%d",&n);
while(n!=0)
{
    r=n%10;
    sum+=r;
    n=n/10;
    
}
int result =(sum/10)+(sum%10);
printf("%d\n",sum);
printf("%d",result);
    return 0;
}
