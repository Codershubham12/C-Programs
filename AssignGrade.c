#include <stdio.h>

int main() {
int s1,s2,s3,s4,s5;
float avg;
printf("enter 5 subjects marks:");
scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
avg=(s1+s2+s3+s4+s5)/5;
printf("%.2f\n",avg);
if(avg >= 90 && avg <= 100 )
{
    printf("grade A");
    return 0;
}

if(avg >= 80 && avg < 90)
{
    printf("grade B");
    return 0;
    
}
if(avg>=70 && avg<80)
{
    printf("grade c");
    return 0;
    
}
if(avg>=50 && avg<70)
{
    printf("grade D");
    return 0;
}
else
{
    printf("grade F");
}
  
    return 0;
}
