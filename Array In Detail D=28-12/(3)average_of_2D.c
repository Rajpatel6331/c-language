#include<stdio.h>
int main(){
//3.WAP to find average of 2D array.
    int a[20][20],m,n,i,j;
    float sum,p,o;

    printf("\n Enter you row & cloumn:");
        scanf("%d %d",&m,&n);

        printf("Enter metnrix \n");

        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter metnrix...\n");
            for(i=0;i<m;i++){
            for(j=0;j<n;j++){
            printf("%d",a[i][j]);
            sum=sum+a[i][j];
         
            }
            printf("\n");
        }
        p=m+n;
        o=sum/p;

        printf("average is :%.2f",o);

    return 0;
}
