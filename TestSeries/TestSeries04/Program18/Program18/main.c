//
//  main.c
//  Program18
//
//  Created by Owner on 4/29/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>
void sortArray(int *ptr);
int main()
{
    int array[10] = {5, 3, 6, 1, 7, 4, 8, 10, 9, 2};
    int *ptr = array;
    
    sortArray(ptr);
    
    for(int i = 0; i < 10; i++)
    {
        printf("%3i", *(ptr+i));
    }
    printf("\n");
}

void sortArray(int *ptr)
{
    int temp;
    
    
    for(int i = 0; i < 10; i++)
    {
        for(int j = i; j < 10; j++)
        {
            if(*(ptr+i) > *(ptr+j))
            {
                temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }
    }
}
