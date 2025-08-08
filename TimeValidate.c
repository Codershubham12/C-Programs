#include <stdio.h>

int main() {
  int h,m;
  printf("Enter the hours (in 24-hour format):");
  scanf("%d",&h);
  printf("Enter the minutes:");
  scanf("%d",&m);
  if(h>0 && h<12)
  {
      printf("The time is %d:%d AM",h,m);
  }
  else
  {
      printf("The time is %d:%d PM",h-12,m);
  }
    return 0;
}
