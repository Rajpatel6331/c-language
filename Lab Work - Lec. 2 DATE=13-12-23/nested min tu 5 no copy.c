#include<stdio.h>

int main(){
    //4. WAP to Find min< from given 5 no. usng nested if else.
    
    int a,b,c,d,e;
    printf("Enter your a,b,c,d,e:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    if(a<b){
        if(a<c){
            if(a<d){
                if(a<e){
                    printf("\n a is min");
                }else{
                    printf("\n e is min");
                }

            }else{
                if(d<e){
                    printf("\n d is min");
                   
                }else{
                    printf("\n e is min");

                }
            }
        }else{
          if(c<d){
                if(c<e){
                    printf("\n c is min");
                }else{
                    printf("\n e is min");
                }

            }else{
                if(d<e){
                    printf("\n d is min");
                   
                }else{
                    printf("\n e is min");

                }
            }

        }
        
    }else{
         if(b<c){
            if(b<d){
                if(b<e){
                    printf("\n b is min");
                }else{
                    printf("\n e is min");
                }

            }else{
                if(d<e){
                    printf("\n d is min");
                   
                }else{
                    printf("\n e is min");

                }
            }
        }else{
          if(c<d){
                if(c<e){
                    printf("\n c is min");
                }else{
                    printf("\n e is min");
                }

            }else{
                if(d<e){
                    printf("\n d is min");
                   
                }else{
                    printf("\n e is min");

                }
            }

        }
        

    }
    


    



 
    
    return 0;
}
