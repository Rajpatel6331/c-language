#include <stdio.h>

int main()
{
    //7. WaP to Find leap year from 2000 to 3000 using do while loop.
    int i = 2000;
    do{
            if (i%4==0){
            printf("\n %d", i);
        }
        i++;
    }while (i <= 3000);
    
    return 0;
}
