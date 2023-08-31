#include<stdio.h>
#include<math.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float length,float breadth);

int main(){
    // float length = 10.0;
    // float breadth = 20.0;
    // printf("Area is : %f",rectangleArea(length,breadth));
    float radius = 5.0;
    printf("Area is %f :",circleArea(radius));
    return 0;
}

float squareArea(float side){
    return side * side;
}

float circleArea(float radius){
    return 3.14*pow(radius,2);
}

float rectangleArea(float length, float breadth){
    return length * breadth;
}