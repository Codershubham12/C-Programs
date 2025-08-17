#include<stdio.h>
int main() {
    
int n,sq,r,i;
printf("enter number");
scanf("%d",&n);
sq=n*n;
for(i=sq;i>=10;i++)
{
   r=sq%10; if(n>=10){r=r*r;}
}   
 if(r==n)printf("%d is automorphic number",n);
else printf("%d is not automorphic number",n);
printf("%d\n",sq);
printf("%d\n",r);
return 0;    
}
