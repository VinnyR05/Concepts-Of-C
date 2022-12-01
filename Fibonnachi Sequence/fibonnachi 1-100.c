#include <stdio.h>

int main()
{
    int Current = 1;
    int Previous = 0;
    int Total = 0;
    printf("0\n");
    printf("1\n");
    while(Current <= 100)
    {
        Total = Current + Previous;
        printf("%i\n", Total);
        Previous = Current;
        Current = Total;
    }
}
