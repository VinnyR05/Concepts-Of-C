//
//  main.c
//  Program15
//
//  Created by Owner on 4/5/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int array[25];
    int five = 0;
    
    srand(time(NULL));
    
    for(int i = 0; i < 25; i++)
    {
        array[i] = rand() % 4 + 3;
        
        printf("%i\t", array[i]);
    }
    
    for(int i = 0; i < 24; i ++)
    {
        if((array[i] == 5 && array[i + 1] != 5) && (array[i] == 5 && array[i - 1] != 5))
        {
            five++;
            i++;
        }
    }
    
    if(five >= 5)
        printf("\nThere are five or more nonconsecutive 5's in the array.\n");
    else
        printf("\nFive nonconsecutive 5's are not in the array.\n");
    
}
