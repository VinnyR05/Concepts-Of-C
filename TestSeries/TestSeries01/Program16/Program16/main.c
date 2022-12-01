//
//  main.c
//  Program16
//
//  Created by Owner on 4/5/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[10];
    int five = 0;
    
    for(int i = 0; i < 10; i++)
    {
        printf("Please enter a number : ");
        scanf("%i", &array[i]);
    }
    
    for(int i = 0; i < 9; i ++)
    {
        if((array[i] == 5 && array[i + 1] == 5) || (array[i] == 5 && array[i - 1] == 5))
        {
            five++;
            i++;
        }
        else if(array[i] == 5 && array[i + 1] != 5)
        {
            five = 0;
            break;
        }
    }
    
    if(five != 0)
        printf("All the 5's in the array are next to another 5.\n");
    else
        printf("There are no 5's in the array or all of the 5's are not next to another 5.\n");
    
}
