#include <stdio.h>
#include <stdlib.h>

int main() {
int n,r1,r2,flag;
printf("enter n number");
scanf("%d",&n);
int org = n;
while(n!=0)
{
  if(n<10) 
        break;
    
    r1=n%10;
    n=n/10;
    r2=n%10;
    
    if(r1==r2+1 || r1==r2-1)
    {
        flag=1;
    }
    else
    {
        flag=0;
        break;
    }
}
if(flag==1)
printf("%d is a step!",org);
else
printf("%d is not a step!",org);
    return 0;
}

