#include<stdio.h>

int main(){
 //9. WaP to calculate the factorial of N. using for loop.
     int i=1,n,mult=1;
    printf("\n Enter you sum:");
    scanf("%d",&n);
    for(;i<=n;i++){
        mult = mult*i;
        }
        printf("\n sum is %d",mult);
    return 0;
}