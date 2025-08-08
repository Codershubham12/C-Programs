#include <stdio.h>

int main() {
    int hour;
    printf("enter the hour:");
    scanf("%d",&hour);
    
    if(hour>6 && hour<12 )
    {
        printf("its morning\n");
    }
    if (hour>=12 && hour<18)
    {
        printf("its afternoon\n");
    }
    if(hour>=18 && hour<20)
    {
        printf("its evening ");
        
    }
    if(hour>=20 || hour<6)
    {
        printf("its night");
    }
    return 0;
}
