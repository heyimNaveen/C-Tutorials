#include<stdio.h>

void calculatePrice(float value);

int main(){
    float value;
    printf("Enter the value: ");
    scanf("%f", &value);
    calculatePrice(value);
    printf("Value is : %f\n",value);
    return 0;
}

void calculatePrice(float value){
    value = value + (0.18*value);
    printf("Final price is : %f \n",value);
}