//
//  main.c
//  Program13
//
//  Created by Owner on 4/28/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    char array[] = {"MyNameIsVinayak"};
    char array2[15];
    char *ptr = array;
    char *ptr2 = array2;
    
    for(int i = 0; i < 15; i++)
    {
        *(ptr2+i) = *(ptr+i);
    }
    
    for(int i = 0; i < 15; i++)
    {
        printf("%c", array2[i]);
    }
    printf("\n");
}
