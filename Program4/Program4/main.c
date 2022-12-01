//
//  main.c
//  Program4
//
//  Created by Owner on 4/27/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int *ptr = array;
    
    for(int i = 0; i < 5; i++)
    {
        printf("The %ith element of the array is %i\n", i, *ptr+i);
    }
}
