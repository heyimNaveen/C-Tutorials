#include<stdio.h>

int main(){
    int marks[4];
    printf("Enter phy: ");
    scanf("%d",&marks[0]);

    printf("Enter chem: ");
    scanf("%d",&marks[1]);

    printf("Enter math: ");
    scanf("%d",&marks[2]);

    printf("Enter Eng: ");
    scanf("%d",&marks[3]);

    printf("phy = %d, chem = %d, math = %d,Eng = %d",marks[0],marks[1],marks[2],marks[3]);

    return 0;
}