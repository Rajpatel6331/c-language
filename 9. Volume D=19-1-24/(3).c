#include <stdio.h>
//3. Write a program to print integer value of day of week using enum.


int main() {
    enum week {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

    printf("\nSun = %d", Sun);
    printf("\nMon = %d", Mon);
    printf("\nTue = %d", Tue);
    printf("\nWed = %d", Wed);
    printf("\nThu = %d", Thu);
    printf("\nFri = %d", Fri);
    printf("\nSat = %d", Sat);

    return 0;
}