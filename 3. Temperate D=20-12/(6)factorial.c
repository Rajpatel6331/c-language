#include<stdio.h>

int main(){

//6. Write C program to calculate factorial of a number.

     int i=1,n,mult=1;
    printf("\n Enter you sum:");
    scanf("%d",&n);
    while (i<=n){
        mult = mult*i;
        i++;
    }
        printf("\n sum is %d",mult);
    return 0;
}