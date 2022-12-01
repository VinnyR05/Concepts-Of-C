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
    int m;
    
    printf("Please enter an integer : ");
    scanf("%i", &m);
    
    if(m > 0)
        printf("n = 1.\n");
    else if(m < 0)
        printf("n = -1.\n");
    else
        printf("n = 0.\n");
}
