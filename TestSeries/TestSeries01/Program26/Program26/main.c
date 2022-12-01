//
//  main.c
//  Program26
//
//  Created by Owner on 4/6/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[10];
    int tf = 0;
    
    for(int i = 0; i < 10; i++)
    {
        printf("Please enter a number : ");
        scanf("%i", &array[i]);
        
        if(array[i - 1] == 15 && array[i] == 15)
            tf++;
    }
    
    if(tf != 0)
        printf("There are two 15's next to each other.\n");
    else
        printf("Two 15's are not next to each other.\n");
}
