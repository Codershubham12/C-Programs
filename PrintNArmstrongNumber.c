#include<stdio.h>
#include<math.h>
int main()

{
     int ns,ne;
     printf("enter starting and ending");
     scanf("%d %d",&ns,&ne);
int n,c,sum=0,rem;
printf("enter a number");
scanf("%d",&n);
for (int i=n;i>0;i=i/10)
{   rem=i%10;
    c++;
}
for (int i=n;i>0;i=i/10)
{
     rem=i%10;
     sum=sum+pow(rem,c);
    
}
if(sum==n)printf("armstrong %d",n);
else printf("not armstrong");

		 return 0;
}
