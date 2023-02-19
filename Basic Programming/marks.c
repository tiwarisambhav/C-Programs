#include<stdio.h>
int main()
{
    float a,b,c,d,e,total,average,percentage,totalmarks;
    printf("write marks here");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    totalmarks=500;
    total=a+b+c+d+e;
    average=(a+b+c+d+e)/5;
    percentage=(total/totalmarks)*100;
    printf("total=%f/n average=%f/n,percentage=%f/n",total,average,percentage);
    return 0;
}