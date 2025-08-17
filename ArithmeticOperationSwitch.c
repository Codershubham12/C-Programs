#include<stdio.h>
int main(){
    int num1,num2;
    char op;
    printf("enter num1");
    scanf("%d",&num1);
    printf("enter num2");
    scanf("%d",&num2);
    printf("enter the operator");
    scanf(" %c",&op);
    switch(op)
    {
        case '+': printf("addition is=%d",num1+num2);break;
        case '-': printf("subtraction is=%d",num1-num2);break;
        case '*': printf("multification is=%d",num1*num2);break;
        case '/': printf("division is=%d",num1/num2);
        default:printf("invalid symbol");
    }
    return 0;
    
}
