//
//  main.c
//  Program12
//
//  Created by Owner on 4/5/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[10];
    int sw5 = 0;
    int e5 = 0;
    
    for(int i = 0; i < 10; i++)
    {
        printf("Please enter a number : ");
        scanf("%i", &array[i]);
        
        if(array[i] == array[i - 2] && array[i] == 5)
            e5++;
        if(array[i] == array[i - 1] && array[i] == 5)
            sw5++;
    }
    
    if(e5 != 0)
        printf("There is a 5 next to another 5 with another element in between.\n");
    if(sw5 != 0)
        printf("There is a 5 next to another 5.\n");
    if(sw5 == 0 && e5 == 0)
        printf("There are no 5's next to another 5 with or without another element in between.\n");
    
}
