#include<stdio.h>
#include<math.h>

int main(){
     char ch;
     printf("Enter a character: ");
     scanf("%c",&ch);

     if(ch >= 'a' && ch <= 'z'){
        printf("Lower case\n");
     }
     else if(ch >='A' && ch<= 'Z'){
        printf("Upper Case\n");
     }
     else{
        printf("Invalid");
     }
}