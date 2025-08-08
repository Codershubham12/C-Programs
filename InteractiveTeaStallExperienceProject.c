#include <stdio.h>

int main()
{    int sum,choice,tea=10,coffee=20,coldcoffee=50,teac,coffec,ccoffec,tot;
  char ch;
  printf("Interactive Tea Stall Experience\n");
  printf("Welcome to our Tea Stall Counter! Our menu:\n");
  printf("here is our menu:\n");
  a:
  printf("Tea --------------------- Rs%d\n",tea);
  printf("coffee --------------------- Rs%d\n",coffee);
  printf("coldcoffee --------------------- Rs%d\n",coldcoffee);
  printf("enter choose a choice you want\n");
  scanf("%d",&choice);
  if(choice==1)
  {   printf("you choose tea\n");
      printf( "How many cups of refreshing tea?\n");
      scanf("%d",&teac);
      tot=teac*tea;
      printf( "Total for %d cup(s): Rs %d\n",teac,tot);
      printf("Enter your payment amount: Rs%d\n",tot);
  }
  else if (choice==2)
  {
      printf("you choose aromatic coffee?\n");
      printf( "How many cups of aromatic coffee?\n");
      scanf("%d",&coffec);
      tot=coffec*coffee;
      printf( "Total for %d cup(s): Rs %d\n",coffec,tot);
      printf("Enter your payment amount: Rs%d\n",tot);
      
  }
  else if (choice==3)
  {
      printf("you choose  chilled cold coffee?\n");
      printf( "How many cups of chilled cold  coffee?\n");
      scanf("%d",&ccoffec);
       tot=ccoffec*coldcoffee;
      printf( "Total for %d cup(s): Rs %d\n",ccoffec,tot);
      printf("Enter your payment amount: Rs%d\n",tot);
  }
  else
  {
      printf("exit");
  }
  printf("Continuation or Farewell:do you want any thing more:\n");
  printf("enter your continuation");
  scanf(" %c",&ch);
  sum=sum+tot;
  if(ch=='y')
  {
  goto a;
  printf("your total bill amount is:%d",sum);
  }
  else
  {
      printf("your total bill amount is:%d",sum);
      printf("  Thank you for visiting! We look forward to serving you again soon!\n");
  }
    return 0;
}
