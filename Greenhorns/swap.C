#include<stdio.h>
#include<conio.h>

int main(){
       int a,b;
       printf("enter u");
       scanf(" %d %d", &a,&b);
       printf("\nBefore swap %d %d",a,b);
       a=a+b;
       b=a-b;
       a=a-b;
      
       printf("\nafter swap %d %d",a,b);
      
     return 0;  
    }
