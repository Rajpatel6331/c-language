#include<stdio.h>


int main(){

    //5. Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
    int unit;
    float bill,charge;
    printf("\n Enter you unit");
    scanf("%d",&unit);
    if (unit<=50){
        bill=(float)unit*0.50;
    }else if(unit>=51 && unit<=150){
        bill=(float)25+unit-50*0.75;

    }else if(unit>=151 && unit<=250){
        bill=(float)100+unit-150*1.20;
    }else{
        bill=(float)220+unit-250*1.50;
    }
    charge=bill*20/100;
    printf("\n bill %.2f",bill);
   
    
    printf("\n charge %.2f",charge);
    
    bill+=charge;

    printf("\n finl bill %.2f",bill);
 


    
    return 0;
}