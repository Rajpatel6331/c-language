#include<stdio.h>

int main(){

//5. Write C program to enter a number and print its reverse & check weather num is palindrome or not?

          int n,r,rev=0,f;
          printf("\n Enter no...");
          scanf("%d",&n);
          f=n;
          while(n>0){
            r=n%10;
            rev=rev*10+r;
            n=n/10;

          }
    printf("\nreverse no is %d",rev);
  

    return 0;
}


