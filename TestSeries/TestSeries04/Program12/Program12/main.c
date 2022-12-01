//
//  main.c
//  Program12
//
//  Created by Owner on 4/28/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    char array[25];
    int i = 0;
    
    for(int i = 0; i < 25; i++)
    {
        array[i] = NULL;
    }
    printf("Please enter your first name : ");
    scanf("%s", array);
    
    while(array[i] != NULL)
    {
        i++;
    }
    
    printf("The length of your name is %i characters\n", i);
}
