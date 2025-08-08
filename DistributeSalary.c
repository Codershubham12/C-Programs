#include <stdio.h>
int main()
{ char designation;
    float salary,tax,totals;
  long ha=10000,fa=3000,ta=10000;
  printf("Enter the basic salary: ");
    scanf("%f", &salary);
  printf("Enter the designation (D/d for Developer),(T/t for trainer),(M/m for manager): ");
    scanf(" %c", &designation);
     if(designation == 'D' || designation == 'd')
     {
         totals=salary+ha;
         printf("total salary for Developer%.2f\n",totals);
         if (totals > 40000)
    {
        tax = 0.1 * totals;
    }
    else
    {
        tax = 0.05 * totals; 
    }
     }
     
    else if(designation == 'T' || designation == 't')
    {
        totals=salary+ha+fa;
        printf("total salary for trainer%.2f\n",totals);
        if (totals > 40000)
    {
        tax = 0.1 * totals;
    }
    else
    {
        tax = 0.05 * totals; 
    }
    }
   else if(designation == 'M' || designation == 'm')
    {
        totals=salary+ha+fa+ta;
        printf("total salary for manager%.2f\n",totals);
        if (totals > 40000)
    {
        tax = 0.1 * totals;
    }
    else
    {
        tax = 0.05 * totals; 
    }
    }
    
  else
  {
      printf("invalid input");
    
  }
 
  printf("Total Salary: %.2f\n", totals);
  printf("Tax: %.2f\n", tax);

     return 0;
}
