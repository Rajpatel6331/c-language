#include<stdio.h>
int main(){

    FILE *fptr;
    char a;
    fptr = fopen("text.txt","r");

    if (fptr==NULL){
        printf("file can't be opened \n");
    }

    a=fgetc(fptr);
    while (a != EOF){
       printf("%c",a);
       name=fgetc(fptr);
    }
 
    fclose(fptr);
    return 0;
}