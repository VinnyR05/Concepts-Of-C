#include <stdio.h>
#include <string.h>

int main()
{
    int FirstNumber;
    int SecondNumber;
    char Operate= '\0';
    char FinalAnswer = '\0' ;
    char SecretLetter = 'A';
    char asd;

    printf("WELCOME!\n Your job is to find out if the calculator is broken or not.\n  Any INVALID inputs will lead to a RESTART of the game.\n\n\n\n");

    switch(SecretLetter)
    {
    case 'A' :
        {
            printf("LEVEL 1\n");
        printf("Enter First Number\n");
        scanf("%i", &FirstNumber);
        printf("Enter Second Number\n");
        scanf("%i", &SecondNumber);
        printf("Enter Operator (multiply- M, division- D, addition- A, subtract- S)\n");
        scanf("%c %c", &asd, &Operate);

        switch (Operate)
        {
        case 'M' :
            {
              Multiply(FirstNumber, SecondNumber);
              break;
            }


        case 'D' :
            {
                Divide(FirstNumber, SecondNumber);
                break;
            }
        case 'A' :
            {
                Add(FirstNumber, SecondNumber);
                break;
            }
        case 'S' :
            {
                Subtract(FirstNumber, SecondNumber);
            }
        }
        }
    }

}//int main() ends

//FUNCTION MULTIPLY
void Multiply(int i1, int i2)
{
    char asd, FinalAnswer;
            printf("The result is %i.\n", (i1 / i2));
            printf("Is the calculator broken or not? (N or Y)\n\n");
            scanf("%c %c", &asd, &FinalAnswer);
            switch (FinalAnswer)
            {
            case 'Y' :
                {
                    printf("CORRECT!!!!!");
                    break;
                }
            case 'N' :
                {
                   printf("Sorry... incorrect. Try a different Operate next time");
                   break;
                }
            default:
                {
                    printf("\nINVALID OPTION!!!!!!!!!!!!! TRY AGAIN!\n\n\n");
                }
            }
            return;
}

//FUNCTION DIVIDE
void Divide(int i1, int i2)
{
    char asd, FinalAnswer;
            printf("The result is %i.\n", (i1 / i2));
            printf("Is the calculator broken or not? (N or Y)\n\n");
            scanf("%c %c", &asd, &FinalAnswer);
            switch (FinalAnswer)
            {
            case 'N' :
                {
                    printf("CORRECT!!!!!");
                    break;
                }
            case 'Y' :
                {
                   printf("Sorry... incorrect. Try a different Operate next time");
                   break;
                }
            default:
                {
                    printf("\nINVALID OPTION!!!!!!!!!!!!! TRY AGAIN!\n\n\n");
                }
            }
            return;
}

//FUNCTION ADD
int Add(int i1, int i2)
{
    char asd, FinalAnswer;
            printf("The result is %i.\n", (i1 + i2));
            printf("Is the calculator broken or not? (N or Y)\n\n");
            scanf("%c %c", &asd, &FinalAnswer);
            switch (FinalAnswer)
            {
            case 'N' :
                {
                    printf("CORRECT!!!!!");
                    break;
                }
            case 'Y' :
                {
                   printf("Sorry... incorrect. Try a different Operate next time");
                   break;
                }
            default:
                {
                    printf("\nINVALID OPTION!!!!!!!!!!!!! TRY AGAIN!\n\n\n");
                }
            }
            return;
}

//FUNCTION SUBTRACT
int Subtract(int i1, int i2)
{
    char asd, FinalAnswer;
            printf("The result is %i.\n", (i1 - i2));
            printf("Is the calculator broken or not? (N or Y)\n\n");
            scanf("%c %c", &asd, &FinalAnswer);
            switch (FinalAnswer)
            {
            case 'N':
                {
                    printf("CORRECT!!!!!");
                    break;
                }
            case 'Y' :
                {
                   printf("Sorry... incorrect. Try a different Operate next time");
                   break;
                }
            default:
                {
                    printf("\nINVALID OPTION!!!!!!!!!!!!! TRY AGAIN!\n\n\n");
                }
            }
            return;
}
