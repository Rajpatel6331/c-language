#include<stdio.h>

   int main(){
    int sal;
    float hra,da,ta,grosssalary;
    printf(" Enter your Salary");
    scanf("%d",&sal);
    hra=sal*10/100;
    da=sal*5/100;
    ta=sal*8/100;
    
    printf("\n Salary hra %.2f",hra);
    printf("\n Salary da %.2f",da);
    printf("\n Salary ta %.22f",ta);
 
    grosssalary=sal+hra+da+ta;
    printf("\n Salary %.2f",grosssalary);

      
    return 0;
 }
 