#include<stdio.h>

int main(){
   //6. WaP to print even no. from n to 1 using while loop. 
    int i=1;
    printf("\n Enter you no..");
    scanf("%d",&i);
    while(i>=1){
       if(i%2 == 0){
         printf("\n %d",i);
       }
        i--;
       
    }
    
    
    return 0;
}
