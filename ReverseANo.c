#include<stdio.h>
int main() {
 int n,rev=0,s=0;
 printf("enter a number");
 scanf("%d",&n);
 while(n>0)
 {//123
     s=n%10;//2
     rev=rev*10+s; 
     n=n/10;//12
     
 }
 printf("%d",rev);
    return 0;
}
