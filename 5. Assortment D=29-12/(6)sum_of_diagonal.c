 #include<stdio.h>
int main(){
//6. Write C program to find sum of diagonal elements of a matrix.
    int a[20][20],m,n,i,j,sum=0;
    printf("\n Enter you row:");
        scanf("%d",&m);

          printf("\n Enter you clo:");
        scanf("%d",&n);

        printf("Enter you Elements \n");

        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf(" metnrix is\n");
         for(i=0;i<m;i++){
            for(j=0;j<n;j++){
               printf("%d",a[i][j]);
            }
                printf("\n");
        }


            for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(i==j){
            sum=sum+a[i][j];

                }
            }
                printf("\n");

        }

          printf("diagonal is :%d",sum);


    return 0;
}