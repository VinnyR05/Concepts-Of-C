//
//  main.c
//  Program18
//
//  Created by Owner on 4/5/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[10];
    int store;
    int tf = 0;
    
    for(int i = 0; i < 10; i++)
    {
        printf("Please enter a number : ");
        scanf("%i", &array[i]);
    }
    
    for(int i = 0; i < 10; i++)
    {
        store = array[i];
        
        if(array[i + 1] == store + 1 && array[i + 2] == store + 2)
            tf++;
    }
    
    if(tf == 0)
        printf("There are no adjacent consecutive numbers in an increasing order.\n");
    else
        printf("There are adjacent consecutive numbers in an increasing order.\n");
}
