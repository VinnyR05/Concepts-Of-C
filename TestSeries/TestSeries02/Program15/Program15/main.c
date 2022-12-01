//
//  main.c
//  Program15
//
//  Created by Owner on 4/9/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int in1, in2, in3;
    
    printf("Please enter 3 angles of a triangle separated by a space : ");
    scanf("%i %i %i", &in1, &in2, &in3);
    
    if(in1 + in2 + in3 == 180)
        printf("A triangle can be formed using these values.\n");
    else
        printf("A triangle can not be formed using these values.\n");
}
