 #include<stdio.h>
int main(){
//3. Write C program to Insert, Delete & Update operations the element into array.
    int a[20],m,n,i,j,insets,pos,newvlu;
    printf("\n Enter you size of array:");
        scanf("%d",&n);

        printf("Enter metnrix \n");

        for(i=0;i<n;i++){
                scanf("%d",&a[i]);
        }
        printf("insert array elements::");
        scanf("%d",&insets);
        a[n]=insets;
        n++;
        printf("\nafter insert array elements::");
            for(i=0;i<n;i++){
              printf("%d ",a[i]);         
        }
        n--;
        printf("\nafter delete array elements::");
         for(i=0;i<n;i++){
              printf("%d ",a[i]);         
        } 
        
              printf("\nEnter position");    
              scanf("%d",&pos);
        
          printf("\nEnter new element");    
              scanf("%d",&newvlu);
              for(i=0;i<n;i++){
                  if(i==pos){
                     a[i]=newvlu;
                  }
              }
         printf("\nafter Update array elements::");
           for(i=0;i<n;i++){
              printf("%d ",a[i]);         
        } 
        

    return 0;
}