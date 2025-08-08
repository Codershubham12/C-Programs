#include <stdio.h>

int main() {
    char ch;
    printf("enter a characater:");
    scanf("%c",&ch);
    
    
    if(ch=='a' ||ch=='e' ||ch=='i' || ch=='o' ||ch=='u')
    {
        printf("vowel");
    }
    if(ch!='a' &&ch!='e' &&ch!='i' && ch!='o' &&ch!='u')
    {
        printf("Consonant");
    }
    return 0;
}
