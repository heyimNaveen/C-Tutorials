#include<stdio.h>

int main(){

    int marks[2][3];
    marks[0][0]=90;
    marks[0][1]=95;
    marks[0][2]=96;

    marks[1][0]=65;
    marks[1][1]=90;
    marks[1][2]=95;

    printf("%d",marks[1][0]);
    return 0;
}