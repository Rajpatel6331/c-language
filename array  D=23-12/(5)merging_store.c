#include<stdio.h>
int main(){
//5.WAP to find peform merging of 1D array & store it into another.
    int a[20],b[20],c[20],m,n,j=0,i,total;
    printf("Enter size of array 1:");
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
        
    }
    printf("\n Enter size of array 2: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++){
        c[i]=a[i];
    }
    total = m+n;
    for(i=m;i<total;i++){
       c[i]=b[j];
       j++;
    }
    for(i=0;i<total;i++){
        printf("%d ",c[i]);
    }
    
    return 0;
}
