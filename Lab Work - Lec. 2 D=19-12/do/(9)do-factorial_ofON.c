#include<stdio.h>

int main(){
 //9. WaP to calculate the factorial of N. using do while loop.
     int i=1,n,mult=1;
    printf("\n Enter you sum:");
    scanf("%d",&n);
    while (i<=n){
        mult = mult*i;
        i++;
    }
        printf("\n sum is %d",mult);
    return 0;
}