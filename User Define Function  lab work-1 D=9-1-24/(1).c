#include<stdio.h>
//1.WAP to find cube of given no using UDF.
int cube(int);
void main() {
    int n;
    printf("Enter a : ");
    scanf("%d",&n);
    printf("\nCube of is %d",cube(n));
}
int cube(int a){
    return a*a*a;
}