#include<stdio.h>

//2. C program to find Sum of all Array Elements by passing array as an argument using User Define Functions.



int sum_el( int n){
   int a[n],i;
    printf("Enter element array :");
    for ( i=0 ; i < n ; i++ ) {
    scanf("%d",&a[i]);
}
int sum=0;
for ( i = 0 ; i < n ; i++){
    sum=sum+a[i];
}
 return sum;
}
void main(){
    int newsum=0,i,n;
    printf("Enter you array :");
    scanf("%d",&n);
    newsum=sum_el(n);
    printf("sum of array element %d",newsum);

    

}