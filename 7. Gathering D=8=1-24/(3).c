#include<stdio.h>
//3. C program to find Length of the String by passing String/ Character Array as an Argument using User Define Functions.

int Length (char arr[50]){
    int i,count=0;
    for(i=0;arr[i]!='\0';i++){
    count++;
    }
    return count;
}

void main(){
    char name[50];
    printf("\n Enter name :");
    scanf("%s",&name);
    printf("\n lengh is %d",Length(name));

}


