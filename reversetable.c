#include<stdio.h>

int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);

    for(int i=10;i>=1;i--){
        printf("%d\n",i*n);
    }
    return 0;
}