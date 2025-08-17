#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the val : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int c=1;
        while(c<=i)
        {
            printf("%d",1);c++;
        }
        if(i!=(n))
            printf("+");
        sum=sum*10+i;
    }
    printf("\nsum is %d ",sum);
return 0;    
}
