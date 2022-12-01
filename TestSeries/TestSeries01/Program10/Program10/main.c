//
//  main.c
//  Program10
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
    
    if(num3 != 0)
        printf("There are 3's in the array.\n");
    if(num5 != 0)
        printf("There are 5's in the array.\n");
    if(num3 == 0 && num5 == 0)
        printf("There are no 3's or 5's in the array.\n");
}
