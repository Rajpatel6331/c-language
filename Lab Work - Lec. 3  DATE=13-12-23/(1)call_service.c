#include <stdio.h>

int main()
{

    //1. WAP to create/simulate telecom call service conversation scenario using nested switch case.
    int a, b;
    printf("\n Enter you jio service :");
    printf("\n gujrati mate 1 dabavo:");
    printf("\n hindi ke liye 2 dabaye:");

    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("\n recharge karva mate 1 dabavo:");
        printf("\n koy pan mahiti mare 2 dabavo :");
        printf("\n bar nikalva mate 3 dabavo:");

        scanf("%d", &b);

        switch (b)
        {
        case 1:
            printf("\n tamaru recharge sari rite thay gayu:");
            break;
        case 2:
            printf("\n tamane sarkhi rite mahiti mali gay:");
            break;
        case 3:
            printf("\n tane bahar nikali gaya savo:");
            break;
        default:
            printf("\n invalid choice.");
            break;
        }
        break;

    case 2:
        printf("\n recharge karana he to 1 dabaeye:");
        printf("\n me aap ki kya nadad kar sakata hu 2 dabaeye:");
        printf("\n aap ko bahar nikalna he to 3 dabaeye:");

        scanf("%d", &b);

        switch (b)
        {
        case 1:
            printf("\n aapka recharge  hogaya he:");
            break;
        case 2:
            printf("\n aap ko sahi rite bat hogay he:");
            break;
        case 3:
            printf("\n aap bahar aagye ho:");
            break;
        default:
            printf("\n invalid choice.");
            break;
        }
        break;
    default:
        printf("\n invalid choice.");
        break;
    }

    return 0;
}