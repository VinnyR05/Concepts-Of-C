//
//  main.c
//  Program13
//
//  Created by Owner on 4/5/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[10];
    int sw35 = 0;
    
    for(int i = 0; i < 10; i++)
    {
        printf("Please enter a number : ");
        scanf("%i", &array[i]);
    }
    
    for(int i = 0; i < 10; i++)
    {
        if(array[i] == 5 && (array[i + 1] == 3 || array[i - 1] == 3))
            sw35++;
    }
    
    if(sw35 != 0)
        printf("There is a 3 next to a 5.\n");
    else
        printf("There are no 3's next to a 5.\n");
    
}
