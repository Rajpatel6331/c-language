#include<stdio.h>
int main(){
//2.WAP to find length of 2D array.
    int a[20][20],m,n,i,j,count=0;
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
            count++;
            }
            printf("\n");
        }
        printf("length is :%d",count);

    return 0;
}
