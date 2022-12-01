//
//  main.c
//  Program23
//
//  Created by Owner on 4/6/2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[10];
    int array2[10];
    int counter = 0;
    int icount = 9;
    
    for(int i = 0; i < 10; i++)
    {
        printf("Please enter a number : ");
        scanf("%i", &array[i]);
    }
    
    for(int i = 0; i < 10; i++)
    {
        if(array[i] == 5)
        {
            array2[icount] = 5;
            icount--;
        }
    }
    
    for(int i = 0; i < 10; i++)
    {
        if(array[i] != 5)
        {
            array2[counter] = array[i];
            counter++;
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
