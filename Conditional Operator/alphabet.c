#include <stdio.h>
int main(){
    char ch;
    printf("Enter the intput");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            printf("Vowel");
        }else{
            printf("Constants");
        }
        }else{
            printf("Not an alphabet");
        }
        return 0;

}

    

