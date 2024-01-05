#include<stdio.h>
#include<string.h>
int main() {
//2. Wap to perform string library functions.
char str[50],str1[50];
printf("Enter name :");
gets(str);
printf("\nname is :");
puts(str);
printf("Enter name1 :");
gets(str1);

printf("\n upper of string is :%s",strupr(str));
printf("\n length of string is :%d",strlen(str));
printf("\n lower of string is :%s",strlwr(str));

printf("\n after value of strcmp :%d",strcmp(str,str1));

strcat(str,"virani");
printf("\nafter marge string is :%s",str);

strcpy(str,"patel");
printf("\nafter copy name is :%s",str);

printf("\n reverse of string is :%s",strrev(str));

 return 0;
}
