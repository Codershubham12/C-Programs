#include <stdio.h>

int main() {
    int age;
    char gender,n;
    printf("enter the nationality of person\n");
    scanf("%c",&n);
    if(n=='i'|| n=='I')
    {
        printf("you are indian go  for further process\n");
        
        printf("enter the gender");
        scanf(" %c",&gender);
        printf("enter the age:");
        scanf("%d",&age);
        if(gender=='m' ||gender=='M')
               
        {  
            if(age>=21 && age<=50)
        {
            printf("Congratulation! you are eligible for marriage");
        }
            else 
        {
                printf("Sorry! you are not eligible for marriage");
        }
        }
        else if (gender=='f' ||gender=='F')
       
        {  
            if(age>=18 && age<=45)
            {
            printf("Congratulation! you are eligible for marriage");
            }
            else 
            {
            printf("Sorry! you are not eligible for marriage");
            }
        }
        else
        {
            printf("invalid gender");
        }
      
    }
    else
    {
        printf("that the eligibility check is only for Indian citizens.");
    }
    
    
    return 0;
}
