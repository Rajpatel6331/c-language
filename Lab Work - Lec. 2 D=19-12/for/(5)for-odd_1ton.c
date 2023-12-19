#include<stdio.h>

int main(){
//5. WaP to print odd no. from 1 to N using for loop. 

  int i=1,n;
    printf("\n Enter you odd no..");
    scanf("%d",&n);
    for(;i<=n;i++){
        if(i%2!=0){
             printf("\n %d",i);

        } 
       
    }

    return 0;
}
