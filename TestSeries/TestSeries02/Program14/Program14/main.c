//
//  main.c
//  Program14
//
//  Created by Owner on 4/8/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int ang1, ang2, ang3;
    
    printf("Please enter the angles of the triangle separated by a space : ");
    scanf("%i %i %i", &ang1, &ang2, &ang3);
    printf("Thank you. Validating...\n");
    
    while(ang1 + ang2 + ang3 != 180)
    {
        printf("Please enter VALID angles of the triangle separated by a space : ");
        scanf("%i %i %i", &ang1, &ang2, &ang3);
        printf("Thank you. Validating...\n");
    }
    
    if(ang1 == ang2 && ang2 == ang3 && ang3 == ang1)
        printf("The triangle is an equilateral triangle!\n");
    else if(ang1 == ang2 || ang2 == ang3 || ang3 == ang1)
        printf("The triangle is an isosceles triangle!\n");
    else
        printf("The triangle is a scalene triangle!\n");
    
    printf("Thank your for using this program!!!!\n");
    
}
