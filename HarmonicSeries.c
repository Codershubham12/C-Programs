#include<stdio.h>
int main() {
    int i;
    float n,sum=0,t=1.0;
    printf("enter test data");
    scanf("%f",&n);
    printf("1+");
    for(i=1;i<=n;i++)
    { if(i%2!=0)
    {
        printf("%.0f/%d-",t,i);
        sum=sum+t/i;    

    }
    else{
        printf("%.0f/%d+",t,i);
         sum=sum-t/i;
    }
    }
    
    printf("\b=%f",sum);
    return 0;
}
