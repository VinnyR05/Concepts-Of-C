//
//  main.c
//  Program14
//
//  Created by Owner on 4/5/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[10];
    int even = 0;
    int odd = 0;
    
    for(int i = 0; i < 10; i++)
    {
        printf("Please enter a number : ");
        scanf("%i", &array[i]);
    }
    
    for(int i = 0; i < 10; i++)
    {
        if(array[i] % 2 == 0 && array[i + 1] % 2 == 0)
            even++;
        if(array[i] % 2 == 1 && array[i + 1] % 2 == 1)
            odd++;
    }
    
    if(even != 0)
        printf("There are even numbers next to each other.\n");
    else
        printf("There are no even numbers next to each other.\n");
    
    if(odd != 0)
        printf("There are odd numbers next to each other.\n");
    else
        printf("There are no odd numbers next to each other.\n");
    
}
