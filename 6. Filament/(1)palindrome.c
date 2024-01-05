#include<stdio.h>
#include<string.h>
int main() {
//1. Write C program to check whether a string is palindrome or not. //nayan 
char str[50],str1[50];
int b;
printf("Enter name :");
gets(str);
strcpy(str1,str);
printf("\nname is %s",str);
printf("\nname is %s",str1);
strrev(str);
printf("\nname is %s",str);
    b=strcmp(str,str1);
    if(b==0){
      printf("\nstring is palindrome\n");
    }else{
      printf("\nstring is not palindrome");

    }





 return 0;
}
