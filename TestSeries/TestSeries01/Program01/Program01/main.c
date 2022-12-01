//
//  main.c
//  Program01
//
//  Created by Owner on 4/1/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int array[9];
    
    for(int i = 0; i < 9; i++)
    {
        printf("enter a number : ");
        scanf("%i", &array[i]);
    }
    
    if(array[0] <= array[4])
    {
        if(array[4] <= array[8])
        {
            printf("%i", array[8]);
        }
        else
        {
            printf("%i", array[4]);
        }
    }
    else
    {
        if(array[0] >= array[8])
        {
            printf("%i", array[0]);
        }
        else
        {
            printf("%i", array[8]);
        }
    }
}
