#include<stdio.h>

int main(){
    int a,b;
    int choice;
    printf("enter 2 number");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        choice = 1;
    }
    else if(b > a){
        choice = 2;
    }
    else if(a==b){
        choice = 3;
    }
    switch(choice)
    {
    case 1: 
        printf("a is big");
        break;
    case 2:
        printf("b is big");
        break;
    case 3: 
        printf("both are equal.");
        break;
    default:
        printf("invalid input.");
    }
    return 0;
}
