#include<stdio.h>

int main(){
  //6. WAP to Find max. from 4 using ternary operator.
    int a,b,c,d;
    printf("Enter your a,b,c,d:");
    scanf("%d %d %d %d",&a,&b,&c,&d);

      (a>b)?(a>c)? (a>d)?printf("\n a is max"):printf("\n d is max"):(c>d)?printf("\n c is max"):printf("\n d is max"):(b>c)?(b>d)?printf("\n b is max"):printf("\n d is max"):(c>d)?printf("\n c is max"):printf("\n d is max");
    
    return 0;
}
