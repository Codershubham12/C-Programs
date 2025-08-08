#include <stdio.h>

int main() {
    int age,Bt,heightc;
    float height,disc,ft;
    char vip_pass;
    printf("enter the age\n ");
    scanf("%d",&age);
     printf("Height in centimeters\n");
    scanf("%f",&height);
    if(age<=0 ||height<=0)
    {
        printf("age and height  is not zero and negative\n");
        return 0;
    }
     if(age<=3)
    {
        printf("welcome you dont need money\n");
        Bt=0;
        printf("base price=%d\n",Bt);
    }
    else if(age>=4 && age<=12)
    {
        printf("have to pay 20 rs\n");
        Bt=20;
        printf("Base price %d\n",Bt);
    }
    else if(age>=13 && age<=64)
    {
        printf("have to pay 100 \n");
        Bt=100;
        printf("Base ticet %d\n",Bt);
    }
   
    else if(age>=64)
    {
        printf("have to pay 50 rs");
        Bt=50;
        printf("Base ticket%d\n",Bt);
    }
    else 
    {
        printf("invalid age\n");
    }
   
   
      if(height>180)
    {
        printf("you have to pay extra 50rs\n");
         heightc=50;
        printf("height charge:%d\n",heightc);
    }
    
   else if(height>=120 && height<=180)
    {
        printf("no additional charge\n");
        heightc=0;
        printf("height charge:%d\n",heightc);
    }
    else if(height<120)
    {
        height=0.5*Bt;
        printf("height charge=%d\n",heightc);
    }
    else
    {
        printf("invalid height\n");
    }
    
    printf("customer has a vip pass (y or n)\n");
    scanf(" %c",&vip_pass);
    
    printf("base ticket%d\n",Bt);
    printf("height charges%d\n",heightc);
    ft=heightc+Bt;
    printf("final ticket price=%.2f\n",ft);
    
       if(vip_pass=='y' || vip_pass=='n')
    {
        disc= ft*0.1;
        printf("vippass discount%.2f\n",disc);
    }
    else
    {
        printf("no have vip pass\n");
    }
    
    printf("dicount for vippass%.2f\n",disc);
    printf("final ticket price=%.2f\n",ft-disc);
    return 0;
}
