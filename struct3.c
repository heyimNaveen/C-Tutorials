#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1 = {502,9.2,"Naveen"};
    printf("Student cgpa = %f\n",s1.cgpa);

    struct student *ptr = &s1;
    printf("Student cgpa with ptr %f\n",(*ptr).cgpa);

    printf("student-> roll is %d\n",ptr->roll);
    printf("Student-> name is %s\n",ptr->name);
    printf("Student-> cgpa is %f\n",ptr->cgpa);

    return 0;
}