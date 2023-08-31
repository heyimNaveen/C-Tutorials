#include<stdio.h>

int HotTemperature();
int ColdTemperature();

int main(){
    int temp;
    printf("Enter The Temperature :");
    scanf("%d",temp);

    if(temp>=25){
        printf("Temperature is : %d",HotTemperature());
    }
    else
    {
       printf("Temperature is : %d",ColdTemperature());
    }
    


    return 0;
}

int HotTemperature(){
    printf("Hot\n");
   
}

int ColdTemperature(){
    printf("Cold\n");
    
}