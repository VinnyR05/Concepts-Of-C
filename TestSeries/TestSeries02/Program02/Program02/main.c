//
//  main.c
//  Program02
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
    
    if(in % 2 == 0)
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");
}
