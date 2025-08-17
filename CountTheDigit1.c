//Count The Digit

#include<stdio.h>
int main(){
  int c=0,n;
  printf("enter a number:");
  scanf("%d",&n);
  while(n>0)
  {
      c++;
      n/=10;
       
  }
  printf("count of the digits is:%d",c);
    return 0;
}