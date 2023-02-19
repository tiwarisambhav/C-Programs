#include<stdio.h>
int main()
{
    int sum,mul,divi,sub,a,b;
    printf("The values of a and b ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    mul=a*b;
    divi=a/b;
    sub=a-b;
    printf("sum=%d\nmul=%d\ndivi=%d\nsub=%d",sum,mul,divi,sub );

    return 0;
}