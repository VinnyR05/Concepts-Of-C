//
//  main.c
//  Program01
//
//  Created by Owner on 4/6/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int in1, in2;
    
    printf("Please enter an integer : ");
    scanf("%i", &in1);
    
    printf("Please enter another integer : ");
    scanf("%i", &in2);
    
    if(in1 > in2)
        printf("%i is greater than %i.\n", in1, in2);
    else if(in1 < in2)
        printf("%i is less than %i. \n", in1, in2);
    else
        printf("%i and %i are equal.\n", in1, in2);
}
