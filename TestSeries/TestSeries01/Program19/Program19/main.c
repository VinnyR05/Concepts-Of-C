//
//  main.c
//  Program19
//
//  Created by Owner on 4/5/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[10];
    int temp;
    
    for(int i = 0; i < 10; i++)
    {
        printf("Please enter a number : ");
        scanf("%i", &array[i]);
    }
    
    for(int i = 0; i < 10; i++)
        printf("%i\t", array[i]);
    
    temp = array[0];
    
    for(int i = 0; i < 9; i++)
        array[i] = array[i + 1];
    
    array[9] = temp;
    
    printf("\n");
    
    for(int i = 0; i < 10; i++)
        printf("%i\t", array[i]);
}
