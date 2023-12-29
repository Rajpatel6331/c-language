 #include<stdio.h>
int main(){
//4. Write C program to addition of two matrices
    int a[20][20],b[20][20],c[20][20],m,n,i,j;
        printf("\n Enter you row size:");
        scanf("%d",&m);

        printf("\n Enter you clo size:");
        scanf("%d",&n);

        printf("Enter of elements of first  metnrix \n");

       for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
        }
       }

       printf("first  metnrix is \n");
       for(i=0;i<m;i++) {
        for(j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
       }
        printf("Enter of elements of second  metnrix \n");

        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
        scanf("%d",&b[i][j]);
            }
        }
        printf("second metnrix is \n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
            printf("%d",b[i][j]);
            }
        printf("\n");

        }


        printf("two metnrix addition is \n");

    
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d",c[i][j]);

            }
        printf("\n");

        }



        

    return 0;
}