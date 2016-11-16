#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,x,value;
    printf("This program evaluates polynomial ax^2+bx+c.\nEnter the values of the coeffiients, seperated by commas(a, b, c): ");
    scanf("%d,%d,%d", &a, &b, &c);
    printf("Enter the value of x: ");
    scanf("%d", &x);
    value = (a * x * x) + (b * x) + c;

    printf("The value of the polynomial %dx%dx%d + %dx%d + %d is %d", a,x,x,b,x,c,value);
    return 0;
}
