#include <stdio.h>

int main() {
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%4==0 && (year%400==0 || year%100!=0))
    {
        printf("it is a leap year");
        
    }
    else
    {
        printf("it is not leap year");
    }
    return 0;
}
