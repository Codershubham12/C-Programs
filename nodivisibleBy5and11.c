#include <stdio.h>

int main() {
    int number;
    printf("enter a number:");
    scanf("%d",&number);
    if(number%5==0 && number%11==0)
    {
        printf("%d is divisible by both 5 and 11\n",number );
    }
    return 0;
}
