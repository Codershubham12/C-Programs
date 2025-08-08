#include <stdio.h>

int main() {
   int wheel,age,option,ntyre,bill;
   char name[30],biken[30];
   printf("wheels :");
   scanf("%d",&wheel);
   if(wheel==2|| wheel==3 || wheel ==4)
   {
       printf("welcome\n");
       printf("what is age of the vehicle in month:");
       scanf("%d",&age);
       if(age>8)
       {
           printf("your vehicle service will done after a while\n");
           printf("enter 1 for tyre problem\n");
           printf("enter 2 for fuel problem\n");
           printf("enter 3 for engine problem\n");
           printf("enter 4 for general services problem\n");
           scanf("%d",&option);
           if(option==1)
           {
               printf("it is tyre problem\n");
               printf("how many tyres you are facing the issue  ");
               scanf("%d",&ntyre);
               bill=ntyre*400;
               printf("Name of the owner\n");
               scanf("%s",name);
               printf("Name of the bike\n");
               scanf("%s",biken);
               printf("issue\n");
               printf("tyre problem\n");
               printf("bill %d\n",bill);
               
               
               
           }
           else if (option==2)
           {
               printf("it is fuel problem\n");
               printf("Name of the owner\n");
               scanf("%s",name);
               printf("Name of the bike\n");
               scanf("%s",biken);
               printf("issue\n");
               printf("fuel problem");
               bill=1500;
               printf("bill %d\n",bill);
           }
            else if (option==3)
           {
               printf("it is engine problem\n");
               printf("Name of the owner\n");
               scanf("%s",name);
               printf("Name of the bike\n");
               scanf("%s",biken);
               printf("issue\n");
               printf("engine problem");
               bill=5000;
               printf("bill %d\n",bill);
           }
           else if (option==4)
           {
               printf("it is general service\n");
               printf("Name of the owner\n");
               scanf("%s",name);
               printf("Name of the bike\n");
               scanf("%s",biken);
               printf("issue\n");
               printf("general serice problem");
               bill=1000;
               printf("bill %d\n",bill);
           }
           else if (option==5)
           {
               printf("all problem\n");
               printf("Name of the owner\n");
               scanf("%s",name);
               printf("Name of the bike\n");
               scanf("%s",biken);
               printf("issue\n");
               printf("fuel problem");
               bill=1500+5000+1000+(ntyre*400);
               printf("bill %d\n",bill);
           }
           else 
           {
               printf("invalid problem");
           }
       }
       else 
       {
           printf("sorry not help you");
       }
   }
   
   else
   {
    printf("this service center is not accepting");   
   }
    return 0;
}
