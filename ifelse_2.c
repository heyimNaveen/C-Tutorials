#include<stdio.h>
#include<math.h>

int main(){
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);

    if(marks>=30 && marks <= 100){
        printf("Your are passed \n");
    }
    else if (marks>=0 && marks <=30){
        printf("Your are Failed");
    }else{
        printf("Wrong marks");
    }
    return 0;
}