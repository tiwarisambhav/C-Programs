#include <stdio.h>
/*Simple interest
int main()
{
    float P,R,T,si;
    printf("write p,r,t here");
    scanf("%f%f%f",&P,&R,&T);
    si=(P*R*T)/100;
    printf("si=%f",si);
    return 0;
}*/
#include <math.h>
int main()
{
    int p,t;
    float r,ci;
    printf("Enter Principal Amount \n");
    scanf("%d",&p);
    printf("Enter the rest of interest\n ");
    scanf("%f",&r);
    printf("Enter the time period \n");
    scanf("%d",&t);
    ci= p*pow(1+r/100,t);
    printf("Compound interest =%f\n",ci);
    return 0;
    

}

 
