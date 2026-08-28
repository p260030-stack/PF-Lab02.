#include <stdio.h>

int main()
{
float vi= 12.5;
float a=3.2;
float t= 6.0;
float vf= vi + (a * t);
float s= (vi * t) + (0.5 * a * t * t);
printf("Parameter\t\tValue\n");
printf("intial velocity=%.2fm\s\n",vi);
printf("acceleration=%.2fm\s\n",a);
printf("time=%.2fm\s\n",t);
printf("final velocity=%.2fm\s\n",vf);
printf("distance=%.2fm\s\n",s);

 return 0;
}
