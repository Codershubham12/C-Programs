#include<stdio.h>
int main()
{
    int n;
    printf("enter a integer:");
    scanf("%d",&n);
    if((n&1)==0)
    {
        printf("even");
        return 0;
    }
    printf("odd");
}
