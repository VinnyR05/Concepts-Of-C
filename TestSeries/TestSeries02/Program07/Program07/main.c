//
//  main.c
//  Program07
//
//  Created by Owner on 4/7/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    float height;
    
    printf("Please enter your height : ");
    scanf("%f", &height);
    
    if(height <= 154.94)
        printf("You are a dwarf.\n");
    
    else if(height <= 160.0 && height > 154.94)
        printf("You are very short.\n");
    
    else if(height <= 165.1 && height > 160.0)
        printf("You are short.\n");
    
    else if(height <= 170.18 && height > 165.1)
        printf("You are on the short side.\n");
    
    else if(height <= 175.26 && height > 170.18)
        printf("You are not that tall.\n");
    
    else if(height <= 180.34 && height > 175.26)
        printf("You are on the tall side.\n");
    
    else if(height <= 187.96 && height > 180.34)
        printf("You are tall.\n");
    
    else if(height <= 193.04 && height > 187.96)
        printf("You are very tall.\n");
    
    else
        printf("You are a giant.\n");
    
}
