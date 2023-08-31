#include<stdio.h>

int square(int n);

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Square root is : %d",square(n));


    return 0;
}

int square(int n){
    return n * n;
}