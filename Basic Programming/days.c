#include<stdio.h>
int main()
{
    float years,week,d;
    printf("No of days");
    scanf("%f",&d);
    years=d/365;
    week=d/7;
    printf("year=%f/n week=%f",years,week);
    return 0;

} 