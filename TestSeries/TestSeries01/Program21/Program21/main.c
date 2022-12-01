//
//  main.c
//  Program21
//
//  Created by Owner on 4/5/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[10];
    int num = 0;
    
    for(int i = 0; i < 10; i++)
    {
        printf("Please enter a number : ");
        scanf("%i", &array[i]);
    }
    
    for(int i = 0; i < 10; i++)
    {
        if(array[i] != 5)
            num++;
        else
            break;
    }
    
    if(num != 10)
    {
        num = 10 - (num + 1);
        
        printf("The old array : ");
        for(int i = 0; i < 10; i++)
            printf("%i\t", array[i]);
        printf("\n");
        
        int array2[num];
        
        for(int i = 0; i < num; i++)
            array2[i] = array[num + i];
        
        printf("The new array : ");
        for(int i = 0; i < num; i++)
            printf("%i\t", array2[i]);
        printf("\n");
    }
    else
        printf("The old array and the new array are the same.\n");
}
