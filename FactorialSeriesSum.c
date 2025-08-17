#include<stdio.h>
int main(){
    int n,s=0,f=1,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=f*i;
        s+=f;printf("%d\n",f);
        
    }
  printf("%d",s);
    return 0;
}
