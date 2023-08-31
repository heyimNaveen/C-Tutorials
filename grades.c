#include<stdio.h>
#include<math.h>

int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);

    if(marks<29){
        printf("Your grade is C");
    }
    else if (marks>=30 && marks<69){
        printf("Your grade is B");
    }
    else if (marks>=70 && marks<89){
        printf("Your grade is A");
    }
    else if(marks>=90 && marks<100){
        printf("Your grade is A+");
    }
    else{
        printf("Inavlid marks");
    }
    return 0;
        
}