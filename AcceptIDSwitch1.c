#include<stdio.h>
int main()
{
    int id,choice;
    printf("enter the id");
    scanf("%d",&id);
    if(id>=11 && id<=15)
    {
        choice=1;
    }
    else if(id>=16 && id<=20)
    {
        choice=2;
    }
    else if(id>=16 && id<=20)
    {
        choice=3;
    }
    else 
    {
        printf("invalid choice");
    }

    switch(choice)
    {
        case 1: printf("software department"); break;
        case 2: printf("developer department"); break;
        case 3: printf("management department"); break;
        default: printf("invalid id");
    }
    return 0;
}
