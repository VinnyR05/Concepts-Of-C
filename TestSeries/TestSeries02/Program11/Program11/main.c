//
//  main.c
//  Program11
//
//  Created by Owner on 4/7/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main()
{
    long a, b, c;
    long result1, result2;
    double simplified;
    
    printf("Please enter the a, b, and c of the quadratic equation (ax^2 + bx + c = 0) separated by a space : ");
    scanf("%li %li %li", &a, &b, &c);
    
    simplified = sqrt(pow(b, 2) - (4 * a * c));
    
    result1 = (-b + simplified) / (2 * a);
    result2 = (-b - simplified) / (2 * a);
    
    if(sqrt(pow(b, 2) - (4 * a * c)) > 0)
        printf("The two possible solutions are %li and %li.\n", result1, result2);
    else
        printf("There are no possible solutions.\n");
}
