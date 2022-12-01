//
//  main.c
//  Program12
//
//  Created by Owner on 4/7/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int rn, phy, chem, ca, len, total;
    float percent;
    
    printf("Please enter the length of the student's name : ");
    scanf("%i", &len);
    
    char name[len];
    
    printf("Please enter the first name of the student : ");
    scanf("%s", name);
    
    printf("Please enter the roll number of the student : ");
    scanf("%i", &rn);
    
    printf("Please input the marks of Physics, Chemistry and Computer Application out of 100 separated by a space : ");
    scanf("%i %i %i", &phy, &chem, &ca);
    
    total = phy + chem + ca;
    percent = total / 3;
    
    printf("First name of the student : %s\n", name);
    printf("Roll number of the student : %i\n", rn);
    printf("Marks of the student in Physics : %i\n", phy);
    printf("Marks of the student in Chemistry : %i\n", chem);
    printf("Marks of the student in Computer Application : %i\n", ca);
    printf("Total marks of the student : %i\n", total);
    printf("Percentage of the student : %.2f%%\n", percent);
    
    if(percent >= 60)
        printf("Division : First\n");
    else if(percent >= 50 && percent < 60)
        printf("Division : Second\n");
    else if(percent >= 40 && percent < 50)
        printf("Division : Third\n");
    else
        printf("The student failed.\n");
}
