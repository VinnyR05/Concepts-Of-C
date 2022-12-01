//
//  main.c
//  Program07
//
//  Created by Owner on 4/5/20.
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
        
        if(array[i] == 5)
            sum += 5;
    }
    
    if(sum == 15)
        printf("All the 5's in the array add up to 15.\n");
    else
        printf("All the 5's in the array do not add up to 15.\n");
}
