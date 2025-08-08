//Finding Positive, Negative or Zero
#include <stdio.h>

int main() {
 int number;
 printf("enter the number:");
 scanf("%d",&number);
 if(number<0)
 {
     printf("the number is negative");
     return 0;
 }
 if(number>0)
 {
     printf("The number is positive");
     
 }
 else 
 {
     printf("The number is zero");
 }
return 0;
}
