#include <stdio.h>
int main()
{
    float meter,kilometer,c;
    printf("value of distance in  centimeter");
    scanf("%f",&c);
    meter=c/100;
    kilometer=c/100000;
    printf("meter=%f\n kilometer=%f\n",meter,kilometer);
    return 0;
}