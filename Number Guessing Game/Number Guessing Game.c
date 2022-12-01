#include <stdio.h>
#include <ctype.h>

int main()
{
    int iInput = 0;
    int RandomNumber = 0;
    RandomNumber = (srand(1) % 10) + 1;
    printf("I am thinking of a number between 1 to 10\nIf u guess it correctly, you are a genius.\n");
    printf("What's your guess?  ");
    scanf("%i", &iInput);
    if (isdigit(iInput) == 0 )
    {
        if (iInput == RandomNumber)
            printf("Good Job! Your guess was correct!!");
        else printf("Sorry, your guess was incorrect :(( The correct answer was %i", RandomNumber);
    }
    else printf("INVALID RESPONSE!!!!!!");
}
