#include<stdio.h>
int main(){
    int n,sum=0,t;
    printf("Enter the val : ");
    scanf("%d",&n);
    t=1;
    for(int i=1;i<=n;i++)
    {
        printf("%d+",t);sum+=t;
        t=t*10+1;
        
    }
    printf("\b=%d",sum);
return 0;    
}
