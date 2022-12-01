//
//  main.c
//  Program09
//
//  Created by Owner on 4/7/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    float x, y;
    
    printf("Please enter a coordinate of a point in the form (x, y) : ");
    scanf("(%f, %f)", &x, &y);
    
    printf("The coordinate you have entered is (%.2f, %.2f).\n", x, y);
    
    if(x > 0)
    {
        if(y > 0)
        {
            printf("The point is in the first quadrant.\n");
        }
        else if(y < 0)
        {
            printf("The point is in the fourth quadrant.\n");
        }
        else
        {
            printf("The point is on the x-axis.\n");
        }
    }
    else if(x < 0)
    {
        if(y > 0)
        {
            printf("The point is in the second quadrant.\n");
        }
        else if(y < 0)
        {
            printf("The point is in the third quadrant.\n");
        }
        else
        {
            printf("The point is on the x-axis.\n");
        }
    }
    else
    {
        if(y == 0)
            printf("The point is on the origin.\n");
        else
            printf("The point is on the y-axis.\n");
    }
}
