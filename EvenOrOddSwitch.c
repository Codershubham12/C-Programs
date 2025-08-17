#include<stdio.h>

int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    
    switch(n%2==0)
    {
        case 1:printf("even");break;
        default:printf("old");
        
    }
    return 0;
}
