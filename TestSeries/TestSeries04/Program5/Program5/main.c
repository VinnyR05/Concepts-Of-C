//
//  main.c
//  Program5
//
//  Created by Owner on 4/27/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array1[] = {1, 2, 3, 4, 5};
    int array2[5];
    int *ptr = array1;
    int *ptr2 = array2;
    
    for(int i = 0; i < 5; i++)
    {
        *(ptr2+i) = *ptr + i;
        printf("%i\n", array2[i]);
    }
}
