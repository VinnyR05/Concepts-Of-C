//
//  main.c
//  Program14
//
//  Created by Owner on 4/28/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    char arr1[] = "Vinayak";
    char arr2[] = "Ranjan";
    char arr3[13];
    char *ptr1 = arr1;
    char *ptr2 = arr2;
    char *ptr3 = arr3;
    
    for(int i = 0; i < 7; i++)
    {
        *(ptr3+i) = *(ptr1+i);
    }
    
    for(int i = 0; i < 6; i++)
    {
        *(ptr3+7+i) = *(ptr2+i);
    }
    
    for(int i = 0; i < 13; i++)
    {
        printf("%c", arr3[i]);
    }
    printf("\n");
}
