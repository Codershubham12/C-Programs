#include<stdio.h>
#include<math.h>
int main()
{
    for(int i=100;i<=9999;i++)
    {
        int sum=0,rem;
        for(int j=i;j>0;)
        {   
            rem=j%10;
            sum+=rem*rem*rem;
            j=j/10;
        }
        if(i==sum)
        {
            printf("%d\n",i);
        }
    }
}
