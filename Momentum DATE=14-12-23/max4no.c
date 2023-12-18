#include<stdio.h>

int main(){
//3. Write C program to find out max from 4 numbers using nested if.  
    int a,b,c,d;
    printf("Enter you max a,b,c,d:");
    scanf("%d %d %d %d",&a,&b,&c,&d);


    if(a>b){
        if(a>c){
            if(a>d){
                printf("\na is max");
            }else{
                  printf("\nb is max");
            }
        }else{
            if(c>d){
                  printf("\nc is max");
               
            } else{
                  printf("\nd is max");
            }
        }
    }else{
        if(b>c){
            if(b>d){
                  printf("\nb is max");
            } else{
                  printf("\nd is max");
            }            
        }else{
              if(c>d){
                  printf("\nc is max");
               
            } else{
                  printf("\nd is max");
            }
        }

    }



 
    
    return 0;
}
