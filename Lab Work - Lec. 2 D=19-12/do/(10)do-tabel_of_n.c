#include<stdio.h>

int main(){
 //10. WaP to print thr multiplication table of N using do while loop.
    int i=1,n;
    printf("\n Enter multiplication table:");
    scanf("%d",&n);
    do{
         printf("\n %d * %d = %d",n,i,n*i);
  
    i++;
    }while (i<=10);
    return 0;
}