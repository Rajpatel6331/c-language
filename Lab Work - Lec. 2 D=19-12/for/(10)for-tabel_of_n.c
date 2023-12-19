#include<stdio.h>

int main(){
 //10. WaP to print thr multiplication table of N using for loop.
    int i=1,n;
    printf("\n Enter multiplication table:");
    scanf("%d",&n);
    for(;i<=10;i++){
        printf("\n %d * %d = %d",n,i,n*i);
  
    }

    return 0;
}