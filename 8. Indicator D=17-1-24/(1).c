#include<stdio.h>
 


 int main(){
    //1. C program to swap two numbers using pointers
    int a,b,*c,*d;

    printf("Enter you a&b :");
    scanf("%d%d", &a, &b);
    printf("\nBefore swapping :%d %d",a,b);
        c=&a; 
        d=&b;

    *c=(*c+*d);
    *d=(*c-*d);
    *c=(*c-*d);
    



    printf("\nAfter swapping :%d %d",a,b);

    
    return 0;
 }




