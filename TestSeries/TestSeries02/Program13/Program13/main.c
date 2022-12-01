//
//  main.c
//  Program13
//
//  Created by Owner on 4/8/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int temp;
    
    printf("Please enter a temperature in C : ");
    scanf("%i", &temp);
    
    if(temp <= 0)
        printf("The weather is freezing.\n");
    
    else if(temp > 0 && temp <= 10)
        printf("The weather is very cold.\n");
    
    else if(temp > 10 && temp <= 20)
        printf("The weather is cold.\n");
    
    else if(temp > 20 && temp <= 30)
        printf("The weather is normal.\n");
    
    else if(temp > 30 && temp <= 40)
        printf("The weather is hot.\n");
    
    else if(temp > 40 && temp <= 50)
        printf("The weather is very hot.\n");
}
