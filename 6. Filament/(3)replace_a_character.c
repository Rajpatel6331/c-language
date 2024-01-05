#include<stdio.h>
#include<string.h>
int main() {
//3.Wap to replace a character in string. 
char str[50],rep_char,new_char;
int i;
printf("Enter name: ");
gets(str);
printf("\nyou name is a : ");
puts(str);

printf("\nEnter character you eant to replace  : ");
fflush(stdin);
scanf("%c",&rep_char);

printf("\nEnter new character you eant to add  : ");
fflush(stdin);

scanf("%c",&new_char);

for(i=0;str[i]!='\0';i++){
    if(str[i]==rep_char){
        str[i]=new_char;
    }

}
printf(" after name is a :");
puts(str);


 return 0;
}
