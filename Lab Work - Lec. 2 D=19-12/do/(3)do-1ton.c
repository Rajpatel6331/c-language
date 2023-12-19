#include<stdio.h>

int main(){
    ////3. WaP to Print 1 to n using do while loop.
    int i=1,n;
    printf("\n Enter you no..");
    scanf("%d",&n);
    do{
          printf("\n %d",i);
        i++;
    }while(i<=n);
      
    return 0;
}
