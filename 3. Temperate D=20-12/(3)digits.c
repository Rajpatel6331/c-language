#include <stdio.h>

int main(){

//3. Write C program to count number of digits in a number.

  int i, n, count=0;
  printf("\n Enter multiplication table:");
  scanf("%d", &n);
    while (n > 0){
    i = n % 10; 
    n/=10;
    count++;
  }
  printf("\n %d", count);
  return 0;
} 