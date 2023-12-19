#include<stdio.h>

int main(){
   //6. WaP to print even no. from n to 1 using for loop. 
    int i=1;
    printf("\n Enter you no..");
    scanf("%d",&i);
    for(;i>=1;i--){
       if(i%2 == 0){
         printf("\n %d",i);
       }
    }
    return 0;
}
