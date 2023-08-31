#include<stdio.h>

struct vector {
    int x;
    int y;
};

int calcsum(struct vector v1,struct vector v2,struct vector sum);

int main(){
    struct vector v1 = {5,10};
    struct vector v2 = {3,2};
    struct vector sum = {0};
    calcsum(v1,v2,sum);

    return 0;
}

int calcsum(struct vector v1,struct vector v2,struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v2.y + v2.y;

    printf("Sum of x is : %d\n",sum.x);
    printf("Sum of y is : %d\n",sum.y);
}