//
//  main.c
//  Program10
//
//  Created by Owner on 4/7/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int math, phy, chem;
    
    printf("Please enter the grade out of 100 in math : ");
    scanf("%i", &math);
    printf("Please enter the grade out of 100 in physics : ");
    scanf("%i", &phy);
    printf("Please enter the grade out of 100 in chemistry : ");
    scanf("%i", &chem);
    
    if(math >= 65 && phy >=55 && chem >=50 && (math + phy + chem) >= 180)
        printf("The candidate is eligible for admission.\n");
    else
        printf("The candidate is not eligible for admission.\n");
}
