#include<stdio.h>
int main()
{
    char name1[20],name2[20];
    int s1,s2;
    printf("enter the first person name");
    scanf("%s",name1);
    printf("enter score of first person:");
    scanf("%d",&s1);
    printf("enter the second person name");
    scanf("%s",name2);
    printf("enter score of 2nd person:");
    scanf("%d",&s2);
    switch(s1>s2)
    {
    case 1: printf("winner name is %s and win by score %d",name1,s1-s2);break;
    case 0: printf("winner name is %s and win by score %d",name2,s2-s1);break;
    }
    return 0;
}
