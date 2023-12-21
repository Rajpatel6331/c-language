#include<stdio.h>

int main(){

//8. Program Check weather num is prime or not


          int i=1,n,count;
         printf("\nEnter no:");
          scanf("%d",&n);
          while(i<=n){
            if(n%i==0){
                count++;

            }
            i++;
             }
            if(count <=2){
            printf("\n it is prime no");

            }else{
            printf("\n it is not prime no");

            }
           
         



         
        

    return 0;
}


