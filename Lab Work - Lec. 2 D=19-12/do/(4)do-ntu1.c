#include<stdio.h>

int main(){
    ////4. WaP to Print n to 1 using do while loop.
    int i=1;
    printf("\n Enter you no..");
    scanf("%d",&i);
    do{
           printf("\n %d",i);
        i--;
    }while(i>=1);
     
    return 0;
}
