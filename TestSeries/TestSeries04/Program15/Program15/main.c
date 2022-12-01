//
//  main.c
//  Program15
//
//  Created by Owner on 4/29/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    char array[] = {"Vinayak"};
    char array2[] = {"Ranjan"};
    char *ptr = array;
    char *ptr2 = array2;
    
    if(*ptr == *ptr2)
        printf("The two strings are the same.\n");
    else
        printf("The two strings are not the same.\n");
}
