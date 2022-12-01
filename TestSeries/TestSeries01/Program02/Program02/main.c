//
//  main.c
//  Program02
//
//  Created by Owner on 4/1/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[10];
    int counter = 0;
    
    for(int i = 0; i < 10; i++)
    {
        printf("Please enter a number : ");
        scanf("%i", &array[i]);
        
        if(array[i] % 2 == 0)
            counter++;
    }
    
    printf("There are %i number of even integers.\n", counter);
}
