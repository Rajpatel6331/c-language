#include <stdio.h>

int main()
{

    // 1. Write C program to input any character and check whether it is alphabet, digit or special character.

    char b;
    printf("Enter yoiu character");
    scanf("%c", &b);
    if (b >= '0' && b <= '9')
    {
        printf("\n digit ");
    }
    else if (b >= 'a' && b <= 'z' || b >= 'A' && b <= 'Z')
    {
        printf("\n alphabet ");
    }
    else
    {
        printf("\n special character ");
    }

    return 0;
}
