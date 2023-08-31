#include<stdio.h>
#include<string.h>
int countlength(char arr[]);

int main(){
    char name[] = "Naveen";
    int length = strlen(name);

    printf("Length is : %d",length);


    return 0;
}

int countlength(char arr[]){
    int count = 0;
    for(int i=0;arr[i]!='\0';i++) {
        count++;
    }
    return count-1;

}