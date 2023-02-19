#include<stdio.h>
int main()
{
      float a,b,thirdangle;
      printf("values of two sides of triangle");
      scanf("%f%f",&a,&b);
      thirdangle=180-(a+b);
      printf("thirdangle=%f",thirdangle);
      return 0;

}