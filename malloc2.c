#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr = (float *) malloc(5 *sizeof(float));

    ptr[0]=50.0;
    ptr[1]=60.0;
    ptr[2]=70.0;
    ptr[3]=80.0;
    ptr[4]=90.0;


    for(int i=0;i<5;i++){
    printf("Rs%f\n",ptr[i]);
    }

    return 0;
}