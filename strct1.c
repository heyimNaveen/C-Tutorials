#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 502;
    s1.cgpa = 7.2;
    strcpy(s1.name,"Naveen");

    printf("Student name is %s\n",s1.name);
    printf("Student roll no is %d\n",s1.roll);
    printf("Student cgpa is %f\n",s1.cgpa);

    return 0;

}