#include<stdio.h>
int main() {
int a,n,s=0;
printf("enter no");
scanf("%d %d",&a,&n);
int x=a*n;
while(a!=0 || n!=0)
{
    a/=2; 
    n*=2;
    if(a%2!=0) {
        s=s+n; 
    }
}
if(x==s){
    printf("it is russian number");}
    else printf("it is not russian number");
    return 0;
}
