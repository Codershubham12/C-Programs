#include<stdio.h>
int main(){
int n,a,i=0;
printf("enter a number:");
scanf("%d",&n);
int m=n;
while(n!=0)
{
    a=n%10;
    i=(i*10)+a;
    n/=10;
}
     if(m==i)
    printf("%d is a palindrome number",i);
    else printf("%d is not palindrome number",m);
    return 0;
}
