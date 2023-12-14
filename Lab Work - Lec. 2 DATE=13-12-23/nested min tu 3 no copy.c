#include<stdio.h>

int main(){

    //2. WAP to Find min. from given 3 no. using nested if else.

    int a,b,c;
    printf("Enter your a,b,c:");
    scanf("%d %d %d",&a,&b,&c);

    if (a<b){
        if(a<c){
            printf("\na is min");
        }else{
             printf("\nb is min");
        }
    }else{
        if(b<c){
             printf("\nd is min");
        }else{
             printf("\nc is min");
        }
    }
    
    return 0;
}
