#include<stdio.h>
int main(){
//4.WAP to find peform addition of 1D array & store it into another.
    int a[10],sum=0,n,i;
    printf("Enter arey :");
    scanf("%d",&n);
    printf("\n Enter elements of array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
            }


            for(i=0;i<n;i++){
                sum=sum+a[i];
            }
        printf("\n sum of array elements : %d",sum);


    return 0;
}
