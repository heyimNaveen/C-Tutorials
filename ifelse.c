#include<stdio.h>
#include<math.h>

int main() {
    int age;
    printf("Enter Your Age: ");
    scanf("%d",&age);

    if(age>18){
        printf("adult \n");
        printf("They can Drive\n");
        printf("They can vote\n");
    }
    else{
        printf("not adult\n");
    }
    printf("Thank you");
    return 0;
}