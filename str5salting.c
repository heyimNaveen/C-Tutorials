#include<stdio.h>
#include<string.h>

void salting(char password[]);
void slice(char str[],int n,int m);

int main(){
    char str[]="Naveen Kumar";
    slice(str,3,6);
    
    return 0;
}

void slice(char str[],int n,int m){
    char newstr[100];
    int j = 0;
    for(int i=n;i<=m;i++,j++){
        newstr[j] = str[i];
    }
    newstr[j]='\0';
    puts(newstr);
}

void salting(char password[]){
    char salt[]="123";
    char newpass[200];

    strcpy(newpass,password);
    strcat(newpass,salt);

    puts(newpass);
}