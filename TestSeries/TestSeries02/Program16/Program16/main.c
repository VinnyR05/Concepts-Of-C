//
//  main.c
//  Program16
//
//  Created by Owner on 4/9/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{

    char input;
    
    printf("Please enter a character : ");
    scanf("%c", &input);
    
    switch(input)
    {
        case '0' ... '9':
            printf("The character you entered is a number.\n");
            break;
            
        case 'A' ... 'Z':
        case 'a' ... 'z':
            printf("The character that you entered is a letter.\n");
            break;
            
        default:
            printf("The character you entered is a special character.\n");
            break;
    }
}
