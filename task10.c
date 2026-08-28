#include <stdio.h>
int main ()
{
double pfmarks = 88.0;
int pfcredithrs = 3;
double clmarks = 76.5;
int credithrs = 3;
double apmarks= 82.0;
int apcredithrs = 2;
double total =(pfmarks*pfcredithrs) +(clmarks*clcredithrs)=(apmarks*apcredithrs);
double total credithrs= (pfcredithrs+clcredithrs+apcredithrs);
double average  = total\credithrs;
printf("Course\t\t\tMarks\tCredit Hours\n");
printf("PF\t%f\t%d\n", pfmarks, pfcredithrs);
printf("CL\t%f\t%d\n,clmarks,clcredithrs);
printf("AP\t%f\t%d\n",apmarks,apcredithrs);
printf("Total Weighted Score\t\t%.2f\n", total);
printf("Total credit hours\t\t%.2f\n", total credithrs);
printf("Total Average\t\t%.2f\n", average);
return 0;
}