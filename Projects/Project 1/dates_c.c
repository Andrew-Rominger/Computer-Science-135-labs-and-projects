#include <stdio.h>
#include <stdlib.h>
//Author: Andrew Rominger
//Date: 09/14/2016
//Project 1, Extra Credit
//net id: arominger

int main()
{
    int d1,d2,d3, d4,m1,m2,m3, m4,y1,y2,y3, y4;
    printf("Enter date 1 (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &m1,&d1,&y1);
    printf("Enter date 2 (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &m2, &d2, &y2);
    printf("Enter date 3 (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &m3, &d3, &y3);
    printf("Enter date 4 (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &m4, &d4, &y4);
    printf("Day\tmonth\tyear\n%2.2d\t%5d\t%d\n%2.2d\t%5d\t%d\n%2.2d\t%5d\t%d\n%2.2d\t%5d\t%d\n", d1,m1,y1,d2,m2,y2,d3,m3,y3,d4,m4,y4);


    return 0;
}
