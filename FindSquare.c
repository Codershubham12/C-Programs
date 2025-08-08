#include <stdio.h>

int main() {
   int num;
   printf("Enter a number :");
   scanf("%d",&num);
   if(num%10<5)
   {
       printf("output is :%d",num*num);
   }
   else
   {
       printf("output is :%d",num);
   }
    return 0;
}
