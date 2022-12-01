//
//  main.c
//  Program7
//
//  Created by Owner on 4/28/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int *ptr = array;
    int temp;
    
    printf("Array values before swap : ");
    for(int i = 0; i < 10; i++)
    {
        printf("%3i", array[i]);
    }
    
    for(int i = 0; i < 5; i++)
    {
        temp = *(ptr+i);
        *(ptr+i) = *(ptr+9-i);
        *(ptr+9-i) = temp;
    }
    
    printf("\n\n\nArray values after swap : ");
    for(int i = 0; i < 10; i++)
    {
        printf("%3i", array[i]);
    }
    printf("\n");
}
