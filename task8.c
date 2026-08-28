#include <stdio.h>

int main()
{
double principal = 250000.00;
float rate = 8.5;
int time = 3 years;
double interest = (principal * rate * time) / 100.0;
double total = principal + interest;
double monthlyInstallment = total / (time * 12.0);
printf("principal\tpkr%2f\n",principal);
printf("rate\tpkr%2f\n",rate);
printf("time\tr%2f\n",time);
printf("interest\t%2f\n",interest);
printf("Total\tpkr%2f\n",total);
 return 0;
}
