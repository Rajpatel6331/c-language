#include<stdio.h>
//2.WAP to find if a given nunmber is divisible by 3 & 5both or not using UDF.
int divisible(int a){
 if((a % 3 ==0) && (a % 5 ==0)){
 printf("\n divisible by 3 & 5");
 }else{
 printf("\n not divisible by 3 & 5");
    
 }

 
}
void main() {
    int n;
    printf("Enter a : ");
    scanf("%d", &n);
    divisible(n);
}
