//
//  main.c
//  Program11
//
//  Created by Owner on 4/5/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[10];
    int sw3 = 0;
    int sw5 = 0;
    
    for(int i = 0; i < 10; i++)
    {
        printf("Please enter a number : ");
        scanf("%i", &array[i]);
        
        if(array[i] == array[i - 1] && array[i] == 3)
            sw3++;
        if(array[i] == array[i - 1] && array[i] == 5)
            sw5++;
    }
    
    if(sw3 != 0)
        printf("There is a 3 next to another 3.\n");
    if(sw5 != 0)
        printf("There is a 5 next to another 5.\n");
    if(sw5 == 0 && sw3 == 0)
        printf("There are no 3's next to another 3 and no 5's next to another 5.\n");

}
