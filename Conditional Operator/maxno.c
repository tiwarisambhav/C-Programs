#include<stdio.h>
/*int main()
{
               int a,b;
               printf("The value of a and b :");
               scanf("%d%d",&a,&b);
               if(a>b){
                              printf("a is greater than  b");
               }else{
                              printf("b is greater than a ");
               }
               return 0;

}*/
int main()
{
               int a,b,c;
               printf("The Value of a,b,c");
               scanf("%d%d%d",&a,&b,&c);
               if(a>b&&a>c){
                              printf("a is greater than b and c");
               }if(b>a&&b>c){
                              printf("b is greater than a and c ");
               }if(c>a&&c>b){
                              printf("c is greater than a and b");
               }
               return 0;
}

