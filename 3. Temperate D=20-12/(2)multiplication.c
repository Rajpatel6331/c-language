#include<stdio.h>

int main(){

//2. Write C program to print multiplication table of any number.

    int i=1,n;
    printf("\n Enter multiplication table:");
    scanf("%d",&n);
    while (i<=10){
        printf("\n %d * %d = %d",n,i,n*i);
  
    i++;

    }
      

    return 0;
}