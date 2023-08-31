#include<stdio.h>

void cube(int n);

int main (){
    int n = 4;
    cube(n);
    printf("Number is = %d\n", n);

    return 0;
}

void cube(int n) {
    n = n * n * n;
    printf("Cube is = %d\n",n);
}