//
//  main.c
//  Program2
//
//  Created by Owner on 4/27/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int num1 = 100;
    int num2 = 200;
    int *p1 = &num1;
    int *p2 = &num2;
    
    printf("The sum of %i and %i is %i\n", *p1, *p2, *p1+*p2);
}
