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
    s1.cgpa = 9.0;
    strcpy(s1.name,"Naveen");


    struct student s2;
    s2.roll = 503;
    s2.cgpa = 8.0;
    strcpy(s2.name,"Praveen");

    printf("Student1 name is %s\n",s1.name);
    printf("Student1 roll no is%d\n",s1.roll);
    printf("Student1 cgpa is %f\n",s1.cgpa);

    printf("Student2 name is %s\n",s2.name);
    printf("Student2 roll no is%d\n",s2.roll);
    printf("Student2 cgpa is %f\n",s2.cgpa);

    return 0;


}
