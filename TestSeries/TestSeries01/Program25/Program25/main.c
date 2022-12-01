//
//  main.c
//  Program25
//
//  Created by Owner on 4/6/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[10];
    
    for(int i = 0; i < 10; i++)
    {
        printf("Please enter a number : ");
        scanf("%i", &array[i]);
    }
    
    for(int i = 1; i < 10; i++)
    {
        if(array[i] > array[i - 1])
            printf("%i is greater than %i.\n", array[i], array[i - 1]);
        else if(array[i] < array[i - 1])
            printf("%i is less than %i.\n", array[i], array[i - 1]);
        else
            printf("%i is equal to %i.\n", array[i], array[i - 1]);
    }
}
