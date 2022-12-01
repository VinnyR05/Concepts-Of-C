#include <stdio.h>

int main()
{
    printf("\n\nPointer to Function but take two integer pointer parameter_____\n");

    //Function declaration
    int Sum(int *n1, int *n2); //watch semi colon  as its declaration only

    //Declare function pointer
    int (*pSum)(int *,int *); // just normal but two integer pointer parameter
    pSum = Sum;

    int ResultValue = 0;
    int n1 = 20, n2 = 30;
    //Function call using funcation pointer -> pSum passing two integer address
    ResultValue = pSum(&n1, &n2);
    printf("\n Value of ResultValue = %d", ResultValue);
}

//It is function of name 'Sum' which return a integer AND takes two parameter (integer pointer, and  integer pointer)
int Sum(int *n1, int *n2)
{
    int Result = 0;
    Result = (*n1+ *n2);
    return Result;
}
