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
    
    printf("Please enter a year : ");
    scanf("%i", &in);
    
    if(in % 4 == 0)
        printf("The year is a leap year.\n");
    else
        printf("The year is not a leap year.\n");
}
