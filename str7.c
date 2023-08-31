#include<stdio.h>
#include<string.h>

void checkchar(char str[],char ch);

int main(){
    char str[]="NaveenKumar";
    char ch ='X';
    checkchar(str,ch);

    return 0;
}

void checkchar(char str[],char ch){
    for(int i=0;str[i]!='\0';i++){
        if(str[i] == ch){
            printf("Character is present");
            return ;
        }
    }
     printf("Character is not present");

}