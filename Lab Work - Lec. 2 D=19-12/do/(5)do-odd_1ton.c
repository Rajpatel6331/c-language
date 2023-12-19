#include<stdio.h>

int main(){
//5. WaP to print odd no. from 1 to N using do while loop. 

  int i=1,n;
    printf("\n Enter you odd no..");
    scanf("%d",&n);
    do{
  if(i%2!=0){
             printf("\n %d",i);

        }     
        i++;
           }
    while(i<=n);
   
    return 0;
}
