#include<stdio.h>
#include<math.h>

int main() {
    char day;
    printf("Enter (m-S): ");
    scanf("%s",&day);

    switch(day){
        case 'm' : printf("Monday \n");
                break;
        case 't' : printf("Tuesday \n");
                break;
        case 'w' : printf("Wensday \n");
                break;
        case 'T' : printf("Thursday \n");
                break;
        case 'f' : printf("Friday \n");
                break;
        case 's' : printf("Saturday \n");
                break;
        case 'S' : printf("Sunday \n");
                break;
        default : printf("Not valid day!\n");
                              
    }
    return 0;
}