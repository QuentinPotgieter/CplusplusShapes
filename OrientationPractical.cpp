// OrientationPractical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("This program was written by: Quentin Potgieter\n");

    //Square
    printf("\nSquare\n\n");
    int rows = 10;
    for (int i = 0; i < rows; i++)
    {
        printf("*******************\n");
    };

    //Diamond
    printf("\nDiamond\n\n");
    int stars = 0;
    for (int i = 16; i > 0; --i)
    {
        char diamondRow[25] = "";
        if (i < 8)
        {
            stars--;
            stars--;
            for (int x = 0; x < (8 - i); ++x)
            {
                strcat_s(diamondRow, " ");
            };
            for (int y = 0; y <= stars; ++y)
            {
                strcat_s(diamondRow, "*");
            };
        }
        else if (i > 8)
        {
            for (int x = 0; x < (i - 9); ++x)
            {
                strcat_s(diamondRow, " ");
            };
            for (int y = 0; y <= stars; ++y)
            {
                strcat_s(diamondRow, "*");
            };
            stars++;
            stars++;
        };
        if (i != 8)
        {
            printf("%s\n", diamondRow);
        }
        else
        {
            stars--;
            stars--;
        };
    };

    //Triangle
    printf("\nTriangle\n\n");
    int steps = 0;
    for (int i = 21; i >= 0; --i)
    {
        char triangleRow[11] = "";
        if (i < 10)
        {
            steps--;
            for (int y = 0; y <= steps; ++y)
            {
                strcat_s(triangleRow, "*");
            };
        }
        else if (i > 10)
        {
            for (int y = 0; y < steps; ++y)
            {
                strcat_s(triangleRow, "*");
            };
            steps++;
        };
        if (i != 10)
        {
            printf("%s\n", triangleRow);
        }
        else
        {
            steps--;
        };
    };

    //Heart
    printf("\nHeart\n\n");
    printf("%s\n", "  *****     *****");
    printf("%s\n", " *******   *******");
    printf("%s\n", "********* *********");
    int fill = 19;
    for (int i = 0; i < 10; ++i)
    {
        char heartRow[25] = "";
        for (int x = 0; x < i; ++x)
        {
            strcat_s(heartRow, " ");
        };
        for (int y = 0; y < fill; ++y)
        {
            strcat_s(heartRow, "*");
        };
        fill--;
        fill--;
        printf("%s\n", heartRow);
    };

    return 0;
}