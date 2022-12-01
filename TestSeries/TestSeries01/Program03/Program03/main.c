//
//  main.c
//  Program03
//
//  Created by Owner on 4/1/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[10];
    int sum = 0;
    
    for(int i = 0; i < 10; i++)
    {
        printf("Please enter an integer : ");
        scanf("%i", &array[i]);
        
        if(array[i] != 17)
            sum += array[i];
    }
    
    printf("The sum of the values in the array except the number 17 is : %i \n", sum);
}
