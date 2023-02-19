#include<stdio.h>
int main()
{
    float celsius,f;
    printf("value of temperature in celsius");
    scanf("%f",&f);
    celsius=(f-32)*5/9;
    printf("celsius=%f",celsius);
    return 0;

} 