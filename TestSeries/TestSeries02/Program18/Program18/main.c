//
//  main.c
//  Program18
//
//  Created by Owner on 4/9/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    float give, take;
    
    printf("Please enter the the amount given and the amount taken separated by a space : ");
    scanf("%f %f", &give, &take);
    
    if(take - give > 0)
        printf("You had a profit of %.2f.\n", take - give);
    else if(take - give < 0)
        printf("You had a loss of %.2f.\n", give - take);
    else
        printf("The amount is the same.\n");
}
