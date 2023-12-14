#include<stdio.h>

int main(){
    //3. WAP to Find max. from given 4 no. using nested if else.


    int a,b,c,d;
    printf("Enter your a,b,c,d:");
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
