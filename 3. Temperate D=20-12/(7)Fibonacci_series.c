#include<stdio.h>

int main(){

//7. Write C program print out Fibonacci series. (0,1,1,2,3,5,8…)


          int i=1,f=0,s=1,t,n;
         printf("\nEnter no:");
          scanf("%d",&n);
          while(i<=n){
         printf("\n %d",f);
         t=f+s;
         f=s;
         s=t;
         i++;

          }

    return 0;
}


