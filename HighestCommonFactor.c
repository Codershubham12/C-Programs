#include<stdio.h>
int main(){
    int n1,n2,i,c=0;
    printf("enter two number");
    scanf("%d %d",&n1,&n2);
    for (i=1;i<n1/2,i<n2/2;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
       c=i;
        }
        
    }
    
     printf("the hcf of%d and %d is %d",n1,n2,c);
    return 0;
}
