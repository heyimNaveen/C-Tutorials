#include<stdio.h>

int max_of_four(int a,int b,int c,int d);

int main(){
    int a,b,c,d;
    printf("Enter Four Integers : \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    int max = max_of_four(a,b,c,d);
    printf("The Maximum of the four integers is : %d\n",max);

    return 0;
    

}

int max_of_four(int a,int b,int c,int d){

    int max = a;
    if(b>max){
        max =b;
    }
    if(c>max){
        max = c;
    }
    if(d>max){
        max=d;
    }
    return max;

}