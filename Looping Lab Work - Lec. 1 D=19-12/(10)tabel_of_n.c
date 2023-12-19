#include<stdio.h>

int main(){
 //10. WaP to print thr multiplication table of N using while loop.
    int i=1,n;
    printf("\n Enter multiplication table:");
    scanf("%d",&n);
    while (i<=10){
        printf("\n %d * %d = %d",n,i,n*i);
  
    i++;

    }
      

    return 0;
}