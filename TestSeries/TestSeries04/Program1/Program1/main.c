//
//  main.c
//  Program1
//
//  Created by Owner on 4/27/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int i = 100;
    int *ptr = &i;
    
    printf("The address of i is - %p\n", ptr);
    printf("The value of i is - %i\n", *ptr);
}
