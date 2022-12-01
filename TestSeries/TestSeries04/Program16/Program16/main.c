//
//  main.c
//  Program16
//
//  Created by Owner on 4/29/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    char array[] = {"VinayakR"};
    char *ptr = array;
    char temp;
    
    for(int i = 0; i < 4; i++)
    {
        temp = *(ptr+i);
        *(ptr+i) = *(ptr+7-i);
        *(ptr+7-i) = temp;
    }
    
    for(int i = 0; i < 8; i++)
    {
        printf("%c", array[i]);
    }
    printf("\n");
}
