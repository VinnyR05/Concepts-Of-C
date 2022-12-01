//
//  main.c
//  Program24
//
//  Created by Owner on 4/6/2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[10];
    int array2[10];
    int counter = 0;
    int icount = 0;
    
    for(int i = 0; i < 10; i++)
    {
        printf("Please enter a number : ");
        scanf("%i", &array[i]);
    }
    
    for(int i = 0; i < 10; i++)
    {
        if(array[i] % 2 == 0)
        {
            array2[icount] = array[i];
            icount++;
        }
    }
    
    for(int i = 0; i < 10; i++)
    {
        if(array[i] %2 != 2)
        {
            array2[icount] = array[i];
            icount++;
        }
    }
    
    printf("Old array : ");
    for(int i = 0; i < 10; i++)
        printf("%i\t", array[i]);
    printf("\n");
    
    printf("New array : ");
    for(int i = 0; i < 10; i++)
        printf("%i\t", array2[i]);
    printf("\n");
}
