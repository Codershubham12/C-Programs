#include<stdio.h>
#include<math.h>
int main() {
int n,i;
printf("number of terms:"); scanf("%d",&n);
for(i=1;i<=n;i++)
{
    printf("number is :%d and cube of the %d is :%.0f\n",i,i,(float)pow(i,3));
}
    return 0;
}
