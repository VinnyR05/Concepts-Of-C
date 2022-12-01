//
//  main.c
//  Program6
//
//  Created by Owner on 4/28/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[] = {100, 200, 300, 400, 500, 600, 700 , 800, 900, 1000};
    int *ptr1 = array1;
    int *ptr2 = array2;
    int temp;

    printf("Array1 values : ");
    for(int i = 0; i < 10; i++)
    {
        printf("%i\t", array1[i]);
    }
    
    printf("\nArray2 values : ");
    for(int i = 0; i < 10; i++)
    {
        printf("%i\t", array2[i]);
    }
    
    for(int i = 0; i < 10; i++)
    {
        temp = *(ptr1+i);
        *(ptr1+i) = *(ptr2+i);
        *(ptr2+i) = temp;
    }
    
    printf("\n\n\n\nArray1 values : ");
    for(int i = 0; i < 10; i++)
    {
        printf("%i\t", array1[i]);
    }
    
    printf("\nArray2 values : ");
    for(int i = 0; i < 10; i++)
    {
        printf("%i\t", array2[i]);
    }
    
    printf("\n");
}
