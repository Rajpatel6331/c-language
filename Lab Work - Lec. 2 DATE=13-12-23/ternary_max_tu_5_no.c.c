#include<stdio.h>

int main(){
    //7. WAP to Find max. from 5 using ternary operator.
    int a,b,c,d,e;
    printf("Enter your a,b,c,d,e:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    (a>b)?(a>c)?(a>d)?(a>e)?printf("\n a is max"):printf("\n e is max"):(d>e)?printf("\n d is max"):printf("\n e is max"):(c>d)?(c>e)?printf("\n c is max"):printf("\n e is max"):(d>e)?printf("\n d is max"):printf("\n e is max"):(b>c)?(b>d)?(b>e)?printf("\n b is max"):printf("\n e is max"):(d>e)?printf("\n d is max"):printf("\n e is max"):(c>d)?(c>e)?printf("\n c is max"):printf("\n e is max"):(d>e)?printf("\n d is max"):printf("\n e is max");

    return 0;
}
