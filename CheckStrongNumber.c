#include<stdio.h>
int main()
{
	int n,f=1,a,sum=0,temp;
	printf("enter a number");
	scanf("%d",&a);
	temp=a;
	 while(a>0)
	{
		n=a%10;
	while(n>=1)	{
			f=f*n; 
	        n--;
		}sum+=f; f=1;
		a/=10;
	}   
		if(temp==sum) printf("%d is a strong number",sum);
		 else printf("%d is a not strong",sum);
		 return 0;
}
