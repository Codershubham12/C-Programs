#include<stdio.h>
int main(){
    int n,sum=0,s=0;
    printf("enter a three digit no");
    scanf("%3d",&n);
    while(n!=0)
    {
        s=n%10;//3
        sum=s+sum;//3
        n=n/10;
    }
    printf("sum=%d",sum);
    return 0;
}
