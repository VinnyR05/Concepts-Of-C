//
//  main.c
//  Program22
//
//  Created by Owner on 4/6/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[9];
    int array2[9];
    int icount = 0;
    
    for(int i = 0; i < 9; i++)
    {
        printf("Please enter a number : ");
        scanf("%i", &array[i]);
    }
    
    for(int i = 0; i < 9; i++)
    {
        if(array[i] == 0)
        {
            array2[i] = array[icount];
            array2[icount] = 0;
            icount++;
        }
        else
            array2[i] = array[i];
    }
    printf("Old array : ");
    for(int i = 0; i < 9; i++)
        printf("%i\t", array[i]);
    printf("\n");
    
    printf("New array : ");
    for(int i = 0; i < 9; i++)
        printf("%i\t", array2[i]);
    printf("\n");
}
