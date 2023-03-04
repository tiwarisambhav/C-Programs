#include<stdio.h>
int main(){
               char ch;
               scanf("%c",&ch);
               if(ch>=65&&ch<=91||ch>=97&&ch<=123){
                              if(ch=='a'||ch=='e'||ch=='o'||ch=='i'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
                                             printf("ch is vowel");
                              }else{
                                             printf("ch is consonant");
                              }
               }
               return 0;

}
