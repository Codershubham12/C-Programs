#include<stdio.h>
#include<string.h>
int main()
{
    int userid,pass;
    printf("enter user id");
    scanf("%d",&userid);
    switch(userid)
    {   case 1001: printf("enter password"); scanf("%d",&pass);
        switch(pass)
        { case 1010: printf("welcome shubham");break;
        default: puts("invalid userid");break;
    }break;
    default:puts("invalid user");
    break;
    }
}
