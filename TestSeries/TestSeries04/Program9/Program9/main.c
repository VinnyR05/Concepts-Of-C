//
//  main.c
//  Program9
//
//  Created by Owner on 4/28/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[3][5] = {{1, 2, 3, 4, 5}, {11, 22, 33, 44, 55}, {111, 222, 333, 444, 555}};
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%i\t", *(*(array + i) + j));
        }
        printf("\n");
    }
}
