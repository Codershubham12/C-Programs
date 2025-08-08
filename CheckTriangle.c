//Validation Check For Triangle
#include <stdio.h>

int main() 
{
    int a,b,c,side;
    printf("enter the lengths of the sides of the triangle:");
    scanf("%d %d %d",&a,&b,&c);
    side=a+b;
    if(side>c)
    {
        printf("The triangle is valid");
    }
    else
    {
        printf("The triangle is not valid");
    }
    return 0;
}
