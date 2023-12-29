#include<stdio.h>

int main(){
//2. Write C program to find  largest number in array.
  int a[20],m,i,max;
    printf("\n Enter number:");
        scanf("%d",&m);

        printf("Enter number  \n");

        for(i=0;i<m;i++){
         
                scanf("%d",&a[i]);
        }
        max=a[0];
            for(i=0;i<m;i++){

            if(a[i]>max){
                max=a[i];
            }
                 
        }
         printf("largest number is :%d",max);

    return 0;
}
