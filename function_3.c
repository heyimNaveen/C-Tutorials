#include<stdio.h>

void Namaste();
void Bonjour();

int main(){
    char ch;
    printf("Enter f for French & i for Indian :");
    scanf("%c",&ch);

    if(ch == 'i'){
        Namaste();
    }else{
        Bonjour();
    }


    return 0;
}

void Namaste(){
    printf("Namaste");
}

void Bonjour(){
    printf("Bonjour");
}
