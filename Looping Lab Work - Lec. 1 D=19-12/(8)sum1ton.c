#include <stdio.h>

int main()
{
    //8. WaP to pint sum 1 to N using while loop.
    int i=1,n,sum;
    printf("\n Enter you sum:");
    scanf("%d",&n);
    while (i<=n){
            // printf("\n %d", i);
        sum = sum+i;
            // printf("\n %d", sum);

        i++;
    }
        printf("\n sum is %d",sum);


    return 0;
}
