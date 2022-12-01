//
//  main.c
//  Program08
//
//  Created by Owner on 4/5/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[10];
    int num3 = 0, num5 = 0;
    
    for(int i = 0; i < 10; i++)
    {
        printf("Please enter a number : ");
        scanf("%i", &array[i]);
        
        if(array[i] == 3)
            num3++;
        else if(array[i] == 5)
            num5++;
    }
    
    if(num3 > num5)
        printf("The number of 3's in the array is greater than the number of 5's in the array.\n");
    else if(num3 < num5)
        printf("The number of 3's in the array is less than the number of 5's in the array.\n");
    else
        printf("The number of 3's and 5's in the array are the same.\n");
}
