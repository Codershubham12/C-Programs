#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    printf("enter the character");
    scanf(" %c",&ch);
   if(isupper(ch)) ch=tolower(ch);
   if(isalpha(ch))
   {
    switch(ch=='a' || ch=='e' || ch=='i' ||ch=='o' ||ch=='u')
    {
        case 0: printf("it is consonant");break;
        case 1: printf("it is vowels");break;
        default:printf("invalid ");
    }
   }
   
    return 0;
}
