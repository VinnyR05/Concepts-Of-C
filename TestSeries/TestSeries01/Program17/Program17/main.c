//
//  main.c
//  Program17
//
//  Created by Owner on 4/5/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[10];
    int input;
    int revcount = 9;
    int tf = 0;
    
    for(int i = 0; i < 10; i++)
    {
        printf("Please enter a number : ");
        scanf("%i", &array[i]);
    }
    
    printf("How many elements in the array do you want to check? Please enter a number no more than 5 : ");
    scanf("%i", &input);
    
    for(int i = 0; i < input; i++)
    {
        if(array[i] != array[revcount])
        {
            tf = 0;
            break;
        }
        else
            tf++;
        revcount--;
    }
    
    if(tf == 0)
        printf("False.\n");
    else
        printf("True.\n");
    
}
