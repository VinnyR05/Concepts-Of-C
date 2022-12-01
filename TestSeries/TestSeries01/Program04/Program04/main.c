//
//  main.c
//  Program04
//
//  Created by Owner on 4/1/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[10];
    int sum = 0;
    
    for(int i = 0; i < 10; i++)
    {
        printf("Please enter a number : ");
        scanf("%i", &array[i]);
    }
    
    for(int i = 0; i < 10; i++)
    {
        if(array[i] == 5)
        {
            if(array[i + 1] != 6)
                sum += array[i];
        }
        else
            sum += array[i];
    }
    
    printf("Sum of values in the array of integers except the number 5 followed by 6 is : %i. \n", sum);
}
