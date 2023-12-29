#include<stdio.h>

int main(){
//1. Write C program to print all negative elements in an array.
int a[20],i,n;
printf("Enter size array : ");
scanf("%d",&n);
printf("\n Enter elements of array : \n");
for(i=0; i<=n; i++){
scanf("%d",&a[i]);
}
printf("\nnegative elements  array : ");
for(i=0; i<=n; i++){
    if(a[i]<0){
        printf("%d",a[i]);
    }
}    
    return 0;
}
