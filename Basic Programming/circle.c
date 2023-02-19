#include <stdio.h>
int main()
{
               float diameter,circum,area,r;
               printf("value of radius is");
               scanf("%f",&r);
               diameter=2*r;
               circum=2*3.14*r;
               area=3.14*r*r;
               printf("diameter=%f\n circum=%f\n area=%f \n",diameter,circum,area);
               return 0;
}