#include <stdio.h>

int main()
{
 float celcius=37.5;
 float farhen= (celcius * 9.0 / 5.0) + 32.0;
 float kelvin= celcius+273.15;
 printf("celcius:%2f\n",celcius)
 printf("Fahrenheit:%2f\n",farhen)
 printf("Kelvin:%2f\n",kelvin)
 return 0;
}
