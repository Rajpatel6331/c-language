#include<stdio.h>

int main(){
  //5. WAP to Find max< from 3 using ternary operator.
    int a,b,c;
    printf("Enter your a,b,c:");
    scanf("%d %d %d",&a,&b,&c);

      (a>b)?(a>c)?printf(" \n a is max"):printf(" \n c is max"):(b>c)?printf(" \n b is max"):printf(" \n c is max");
    
    return 0;
}
