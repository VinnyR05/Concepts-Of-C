#include <stdio.h>

int main()
{
    int num1, num2;
    long snum;

    void ask(int *ptr);

    void sum(int *Pnum1, int *Pnum2, long *Psum);

    void display(int *Pnum1, int *Pnum2, long *Psum);

    printf("You are asked to enter 2 integer numbers\n\n");

    ask(&num1);
    ask(&num2);
    sum(&num1, num2, &snum);
    display(&num1, &num2, &snum);
    return 0;
}

void ask(int *ptr)
{
    printf("Enter a number: ");
    scanf(%i, ptr);
    return;
}

void display(int *Pnum1, int *Pnum2, long *Psum);
{
    printf("\n%i + %i = %i", *Pnum1, *Pnum2, *Psum);

}
