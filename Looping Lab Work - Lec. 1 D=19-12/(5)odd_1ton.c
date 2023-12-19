#include<stdio.h>

int main(){
//5. WaP to print odd no. from 1 to N using while loop. 

  int i=1,n;
    printf("\n Enter you odd no..");
    scanf("%d",&n);
    while(i<=n){
        if(i%2!=0){
             printf("\n %d",i);

        }     
        i++;
       
    }

    return 0;
}
