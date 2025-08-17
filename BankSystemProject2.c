#include<stdio.h>
int main()
{
    char trac;
    float amt,bal;
    int ch;
    
   printf("your minimum balance");
    scanf("%f",&bal);
 switch(bal>=2000)
 {   
case 1: {   printf("enter the char for validation");
    scanf(" %c",&trac);
    if(trac=='d' || trac=='D')
    {   printf("how much amt you want to deposit");
        scanf("%f",&amt); 
         
        if(amt<0)
            printf("invalid amount");
        else ch=1;
        break;
    }
}
    
    
case 2:
    { if (trac=='w' || trac=='W')
     {
        printf("how much amt you want to debit(wh)");
        scanf("%f",&amt);
        if(amt<0)
            printf("invalid amount");
        else ch=2;
        }
  break;  } 
}
switch(ch)
    {
        case 1: printf("balance=%.2f",bal+amt);break;
        case 2: printf("balance=%.2f",bal-amt);break;
    }
    
 return 0;
}
