#include <stdio.h>

int main()
{
    //NOTE :
    //1) *a : Read as the 'value at the address of' 'a'

    // INTEGER POINTER
    printf("\n\n INTEGER POINTER");
    int i = 65;
    int *ip = &i;
    printf("\n Value of i = %d", i);
    printf("\n Address of variable i = %d", &i);
    printf("\n Value of ip that is Address of i = %d", ip);
    printf("\n Value at the Address of ip = %d", *ip);

    //[1] CHAR POINTER
    printf("\n\n CHAR POINTER");
    char c = 'A';
    char *cp = &c;
    printf("\n Value of c = %c", c);
    printf("\n Address of variable c = %d", &c);
    printf("\n Value of cp = %d", cp);
    printf("\n Value at the Address of cp = %c", *cp);

    //[2] LONG POINTER
    printf("\n\n LONG POINTER");
    long l = 70;
    char *lp = &l;
    printf("\n Value of c = %d", l);
    printf("\n Value of cp = %d", lp);
    printf("\n Value at the Address of lp = %d", *lp);

    //[3]Function Pointer
    printf("\n\n Function Pointer \n");
    int Result = 0;
    Result = Addition(20,30);
    printf("\n Value of Result = %d", Result);

    //[4]Function declaration;
    int Addition (int n1, int n2);
    int (*fp)(int,int);
    fp = Addition;

    int Result = 0;
    Result = fp(20,30);
    printf("\n Value of pResult = %d\n", Result);
}

//It is function of name 'Addition' which return a integer and takes two parameter (integer, integer)
int Addition (int n1, int n2)
{
    //Do function work, in this case just add the numbers n1, n2
    int tempResult = n1 + n2;
    return (tempResult);
}
