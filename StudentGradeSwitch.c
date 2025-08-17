#include<stdio.h>
int main(){
  int Phy,Che,Bio,Math,Com,choice;
  float per;
  printf("enter the student marks:");
  scanf("%d %d %d %d %d",&Phy,&Che,&Bio,&Math,&Com);
  per=((Phy+Che+Bio+Math+Com)*100/500);
  if(per>=90 && per<=100)
  {
      choice=1;
  }
  else if (per>=80 && per<90)
  {
      choice=2;
  }
  else if (per>=70 && per<80)
  {
      choice=3;
  }
  else if(per>=60 && per<70)
  {
      choice=4;
  }
  else if(per>=40 && per<60)
  {
      choice=5;
  }
  else if(per<40)
  {
      choice=6;
  }
  switch(choice)
  {
      case 1: printf("grade A"); break;
      case 2: printf("grade B"); break;
      case 3: printf("grade C"); break;
      case 4: printf("grade D"); break;
      case 5: printf("grade E"); break;
      case 6: printf("grade F"); break;
      default: printf("invalid marks");
  }
  
    return 0;
}
