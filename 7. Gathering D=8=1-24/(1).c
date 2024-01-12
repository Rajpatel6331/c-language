#include<stdio.h>

//1. C program to find factorial of number using recursion.


void dis(int a){
    if(a<=5){
        printf("\n%d",a);
        dis(a+1);
    }

}

int sum( int a){
    if(a<=5){
        return a*sum(a+1);
    }else{
        return 1;
    }


}
void main(){
    int i=1;
    dis(i);
    printf("\n factorial is %d",sum(i));
    

}