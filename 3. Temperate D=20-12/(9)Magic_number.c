#include <stdio.h>

int main()
{

  // 9.write a c program to check inputted number is Magic number or not.

  int n, i, sum = 0, s, rev=0,munt,b;
  printf("\n Enter no:");
  scanf("%d", &n);
b=n;
  while (n > 0)
  {
    i = n % 10;
    n = n / 10;
    sum += i;
  }
  s = sum;
  while (s > 0)
  {
    i = s % 10;
    rev = (rev * 10) + i;
    s = s / 10;
  }
munt=sum*rev;
  printf("\n%d", sum);
  printf("\n%d", rev);

  printf("\n%d", munt);
  
   if(b==munt){
  printf("\n Magic number");
      
   }else{
  printf("\n not Magic number");

  }
  return 0;
}
