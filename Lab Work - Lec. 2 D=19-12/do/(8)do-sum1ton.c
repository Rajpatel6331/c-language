#include <stdio.h>

int main()
{
    //8. WaP to pint sum 1 to N using do while loop.
    int i=1,n,sum;
    printf("\n Enter you sum:");
    scanf("%d",&n);
    do{
        sum = sum+i;
        i++;
    } while (i<=n);
        printf("\n sum is %d",sum);


    return 0;
}
