#include <stdio.h>
int main(){
               int a;
               scanf("%d",&a);
               switch(a%2)
               {
                              case 1:
                              printf("Odd");
                              break;
                              case 0:
                              printf("Even");
                              break;
                              default:
                              printf("Enter integer ");
               }
}