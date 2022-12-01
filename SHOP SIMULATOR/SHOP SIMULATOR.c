#include <stdio.h>

int main()
{
    int Selection = 0;
    int Amount = 0;
    int Amount1 = 0;
    int Amount2 = 0;
    float Price1 = 12.73;
    float Price2 = 64.82;
    float TotalPrice;
    printf("Discounted Items");
    printf("\n1.\tLamp");
    printf("\n2.\tShoe Rack");
    printf("\n3.\tI want to buy both of them!\n");
    printf("\nChose your selection: ");
    scanf("%i", &Selection);
    if (Selection == 1)
    {
        printf("How many do you want?\n");
        scanf("%i", &Amount);
        TotalPrice = Price1 * Amount;
        printf("Your item price is %2.2f (exclusive of all taxes)", TotalPrice);
    }
    if (Selection == 2)
    {
        printf("How many do you want?\n");
        scanf("%i", &Amount);
        TotalPrice = Price2 * Amount;
        printf("Your Total is %2.2f (exclusive of all taxes)", TotalPrice);
    }
    if (Selection == 3)
    {
    printf("How many Lamps do you want?\n");
    scanf("%i", &Amount1);
    printf("\nHow many Shoe Racks do you want?\n");
    scanf("%i", &Amount2);
    TotalPrice = (Price1 * Amount1) + (Price2 * Amount2);
    printf("Your Total is %2.2f (exclusive of all taxes)", TotalPrice);
    }
}
