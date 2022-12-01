//
//  main.c
//  Program05
//
//  Created by Owner on 4/7/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int in;
    
    printf("Please enter an age : ");
    scanf("%i", &in);
    
    if(in >= 17)
        printf("You are eligible to vote.\n");
    else
        printf("You are not eligible to vote.\n");
}
