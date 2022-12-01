//
//  main.c
//  Program20
//
//  Created by Owner on 4/5/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[10];
    int num = 0;
    int in;
    
    for(int i = 0; i < 10; i++)
    {
        printf("Please enter a number : ");
        scanf("%i", &array[i]);
    }
    
    printf("Please enter a number to separate the array : ");
    scanf("%i", &in);
    
    for(int i = 0; i < 10; i++)
    {
        if(array[i] != in)
            num++;
        else
            break;
    }
    
    printf("The old array : ");
    for(int i = 0; i < 10; i++)
        printf("%i\t", array[i]);
    printf("\n");
    
    int array2[num];
    
    for(int i = 0; i < num; i++)
        array2[i] = array[i];
    
    printf("The new array : ");
    for(int i = 0; i < num; i++)
        printf("%i\t", array2[i]);
    printf("\n");
}
