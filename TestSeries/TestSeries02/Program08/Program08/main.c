//
//  main.c
//  Program08
//
//  Created by Owner on 4/7/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int in1, in2, in3;
    
    printf("Please enter three numbers separated by a space : ");
    scanf("%i %i %i", &in1, &in2, &in3);
    
    printf("First Number = %i\t\t Second Number = %i\t\t Third Number = %i\n", in1, in2, in3);
    
    if(in1 > in2)
    {
        if(in1 > in3)
            printf("The First Number is the greatest among these three numbers.\n");
        else
            printf("The Third Number is the greatest among these three numbers.\n");
    }
    else if(in2 > in3)
        printf("The Second Number is the greatest among these three numbers.\n");
    else
        printf("The Third Number is the greatest among these three numbers.\n");
}
