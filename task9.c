#include <stdio.h>
int main ()
{
double basic salary = 85000.00;
double hra= 0.20*basic salary;
double ma=0.10*basic salary;
double gross salary=basic salary + hra + ma;
double income tax=0.05*gross salary;
double net=gross ssalary - income tax;
printf("Salary Component\t\tAmount (PKR)\n");
printf("Basic Salary\t%.2f\n", basic salary);
printf("House Rent Allowance\t%.2f\n", hra);
printf("Medical Allowance\t%.2f\n",ma);
printf("Gross Salary\t%.2f\n", gross salary);
printf("Income Tax Deduction\t%.2f\n", income tax);
printf("Income Tax Deduction\t\t%.2f\n", taxDeduction);
printf("NET salary\t\t%.2f\n", net);
 return 0;
}