#include<stdio.h>

int main(){

//4. Write C program use switch statement. Display Monday to Sunday.

   char a;
    printf("Enter you day fast later");
     scanf("%c",&a);

     switch (a){
      case'm':
       printf("\n monday");
      break;  

      case't':
       printf("\n tuesday");
      break; 

      case'w':
       printf("\n wednesday");
      break;  

      case 'T':
       printf("\n thursday");
      break;  

      case'f':
       printf("\n friday");
      break;  

      case's':
       printf("\n saturday");
      break;   

      case'S':
       printf("\n sundau");
      break;  
      
     default:
       printf("\n invalid input");
        break;
     }
  
    return 0;
}
