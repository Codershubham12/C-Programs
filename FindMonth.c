#include <stdio.h>

int main() {
int m;
printf("Enter month number(1-12)");
scanf("%d",&m);
if(m==1 || m==3 ||m==5 || m==7 ||m==8 ||m==10||m==12)
printf("number of days: 31");
else if(m==2)
printf("number of 28/29days");
else if(m==4||m==6||m==9||m==11)
printf("number of day 30");
else 
printf("Invalid month no");
return 0;
}
