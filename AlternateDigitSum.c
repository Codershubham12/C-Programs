#include<stdio.h>
int main() 
{
long n;int es=0,os=0,p=1,r;
printf("enter n number");
scanf("%ld",&n);
 while(n!=0)
 {
     r=n%10;
     if(p%2==0)
     {
         es+=r;
     }
     else{
         os+=r;
     }
     n/=10;
     p++;
 }
 if(es==os)
 {
     printf("alternate digit sum is same");
 }
 else printf("alternate digit sum is not same");
   return 0;
}
