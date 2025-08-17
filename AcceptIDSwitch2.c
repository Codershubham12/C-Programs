#include<stdio.h>
int main()
{
    int id;
    printf("enter the id");
    scanf("%d",&id);
    
    switch(id)
    {
        case 11: case 12: case 13: case 14: case 15:  printf("software department"); break;
        case 16: case 17: case 18: case 19: case 20: printf("developer department"); break;
        case 21: case 22: case 23: printf("management department"); break;
        default: printf("invalid id");
    }
    return 0;
}
