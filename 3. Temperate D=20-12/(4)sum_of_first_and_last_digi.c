#include<stdio.h>

int main(){

//4. Write C program to find sum of first and last digit of a number.

          int n,fast,last,b;
          printf("\nEnter no:");
          scanf("%d",&n);
          b=n;
         last=b%10;
         while(n>0){
            fast=n%10;
            n=n/10;

          }
          printf("\nfast & last digit sum:%d",fast+last);
    
    return 0;
}


