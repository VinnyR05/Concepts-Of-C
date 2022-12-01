//
//  main.c
//  Program17
//
//  Created by Owner on 4/9/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    char in;
    
    printf("Please enter a letter : ");
    scanf("%c", &in);
    
    switch(in)
    {
        case 'A':case 'a': case 'E': case 'e': case 'I': case 'i': case 'O': case 'o': case 'U': case 'u':
        {
            printf("The letter is a vowel.\n");
            break;
        }
        default:
        {
            printf("The letter is a consonant.\n");
            break;
        }
    }
}
