#include<stdio.h>
int main(){
    int a=0,n,b=1,f;
    printf("Enter how many Fibonacci series you want :");
    scanf("%d",&n);
    while(n!=0)
    {   f=a+b;
        printf("%2d ",a);
        a=b;
        b=f;
        n--;
    }
    
    return 0;
}
