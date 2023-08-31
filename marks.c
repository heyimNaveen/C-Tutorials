#include<stdio.h>

float AverageMarks(float math,float science,float english);

float main(){
    float science = 95.0;
    float math = 98.0;
    float english = 97.0;

    printf("Percentage is : %f",AverageMarks(science,math,english));


    return 0;
}

float AverageMarks(float science,float math,float english ){
    return ((science+math+english)/3);
}
    