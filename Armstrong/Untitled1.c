#include <stdio.h>

int main()
{
    int iInput, Ones, Tens, Hundreds, Total, Result;

    printf("Enter a 3 digit number\n\n");
    scanf("%i", &iInput);

    Ones = iInput % 10;
    Tens = ((iInput % 100) - Ones) / 10;
    Hundreds = ((iInput % 1000) - (Tens+Ones)) / 100;
    printf("The hundreds place is %i, the tens place is %i and the ones place is %i.\n\n", Hundreds, Tens, Ones);

    Ones = Ones ^ 3;
    Tens = Tens ^ 3;
    Hundreds = Hundreds ^ 3;
    Total = Ones + Tens + Hundreds;
    if(Total == iInput)
        {
            printf("The given number is an Armstrong Number :))");
        }
    else
        {
            printf("Sorry, the given number is not an Armstrong Number :((");
        }
}
