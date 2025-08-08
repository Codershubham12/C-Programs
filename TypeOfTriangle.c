#include <stdio.h>

int main() {
    float a, b,c;
    printf("Enter the lengths of the sides of the triangle:\n");
    printf("side 1 :");
    scanf("%f",&a);
    printf("side 2 :");
    scanf("%f",&b);
    printf("side 3 :");
    scanf("%f",&c);
    if(a==b && b==c)
    {
       printf("The triangle is an equilateral:");
    }
   else if(a!=c && a!=b && b!=c)
    {
       printf("The triangle is an scalene triangle.");
    }
   else 
   
   {
       printf("The triangle is a isosceles triangle.");
   }
   

    return 0;
}
