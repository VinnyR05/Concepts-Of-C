//
//  main.c
//  Program3
//
//  Created by Owner on 4/27/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int num1 = 100, num2 = 300;
    int *p1 = &num1, *p2 = &num2;
    int temp;
    
    printf("The original values are %i and %i\n", *p1, *p2);
    
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
    printf("The swapped values are %i and %i\n", *p1, *p2);
}
