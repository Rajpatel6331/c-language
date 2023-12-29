#include<stdio.h>
int main(){
//1.WAP to get & print 2D array of N elements.
    int a[20][20],m,n,i,j;
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
            }
            printf("\n");
        }

    return 0;
}
