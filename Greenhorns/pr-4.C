#include<stdio.h>

   int main(){
    int sal;
    float hra,da,ta,grosssalary;
    printf(" Enter your Salary");
    scanf("%d",&sal);
    hra=sal*10/100;
    da=sal*5/100;
    ta=sal*8/100;
    grosssalary=sal+hra+da+ta;
    printf("\n Salary %f",grosssalary);

      
    return 0;
 }
 