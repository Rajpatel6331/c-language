#include<stdio.h>
int main(){
//3.WAP to find average of 1D array.
    int a[10],sum,n,loop;
    float size;
    printf("Enter arey :");
    scanf("%d",&n);
    printf("\n Enter elements of array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
            }
        sum=size=0;

            for(loop=0;loop<n;loop++){
                sum=sum+a[loop];
            }
            size=(float)sum+loop;
        printf("\n average of 1D array. %.2f",size);


    

    
    return 0;
}
