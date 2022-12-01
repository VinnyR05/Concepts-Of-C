//
//  main.c
//  Program8
//
//  Created by Owner on 4/28/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int *ptr = array;
    int in;
    int counter = 10;
    
    printf("Please enter a number from 0 - 9 : ");
    scanf("%i", &in);
    
    for(int i = 0; i < counter; i++)
    {
        if(in == *(ptr+i))
        {
            printf("The number %i is in the %ith index of the array.\n", in, i);
            counter = i;
        }
    }
}
