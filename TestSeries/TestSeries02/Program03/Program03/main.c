//
//  main.c
//  Program03
//
//  Created by Owner on 4/7/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int in;
    
    printf("Please enter an integer : ");
    scanf("%i", &in);
    
    if(in < 0)
        printf("The number is negative.\n");
    else
        printf("The number is positive.\n");
}
