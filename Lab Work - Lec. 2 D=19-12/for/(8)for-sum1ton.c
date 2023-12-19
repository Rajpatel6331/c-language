#include <stdio.h>

int main()
{
    //8. WaP to pint sum 1 to N using for loop.
    int i=1,n,sum;
    printf("\n Enter you sum:");
    scanf("%d",&n);
    for(;i<=n;i++){
        sum = sum+i;
  
    }
        printf("\n sum is %d",sum);
    return 0;
}
