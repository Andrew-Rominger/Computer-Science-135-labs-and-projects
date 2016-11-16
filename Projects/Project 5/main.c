#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
void print_month(int month, char firstDay, int length, char months[12][9]);
char next_month_first_day(int month, char firstDay);
void printWeeks(int num, int starting_num, int month);
int main()
{
    char arrayDays[7] = {'S','M', 'T','W','H','F','A'};
    int month, length, check;
    check = 0;
    char months[12][9] = {"January", "February", "March", "April", "May","June", "July", "August", "September", "October","November","December"};
    char startingDay;
    printf("Enter a starting month: ");
    scanf(" %d", &month);
    printf("\nWhat day is the 1st day of %s[S,M,T,W,H,F,A]:", months[month-1]);
    scanf(" %c", &startingDay);
    startingDay = toupper(startingDay);
    for(int i = 0; i < 7;i++)
    {
        if(startingDay == arrayDays[i])
        {
            check  = 1;
            break;
        }
    }
    if(!check)
    {
        printf("\nInvalid day of week.\n");
        return 0;
    }
    printf("\nHow many months do you want printed: ");
    scanf("%d", &length);
    print_month(month, startingDay, length, months);
    return 0;
}
char next_month_first_day(int month, char firstDay)
{
    char arrayDays[7] = {'S','M','T','W','H','F','A'};
    int pos = 0;
    for(int i = 0; i < 7;i++)
    {
        if(firstDay == arrayDays[i])
        {
            pos = i;
            break;
        }
    }
    for(int i = 1; i < 13; i++)
    {
        if(i == month)
        {
            if(i == 3)
            {
               break;
            }
            if((i % 2) == 0 || month ==1)
            {
                pos+= 3;
            }
            else
            {
                pos+=2;
            }
            break;
        }
    }
    if(pos > 6)
    {
        pos-=7;
    }
    return arrayDays[pos];
}
void print_month(int month, char firstDay, int length, char months[12][9])
{
    char arrayDays[7] = {'S','M','T','W','H','F','A'};
    int pos,m;
    pos = 0;
    m = month;
    for(int i = 0; i < 7;i++)
    {
        if(firstDay == arrayDays[i])
        {
            pos = i;
            break;
        }
    }
    if(length == 0)
    {
        return;
    }
    printf("\n");
    printf("%s\n", months[month-1]);
    for(int i = 0; i < 7;i++)
    {
        printf(" %-2c", arrayDays[i]);
    }
    printf("\n");
    for(int i = 0; i < pos;i++)
    {
        printf("   ");
    }
    for(int i = 1; i < 7-pos+1;i++)
    {
        printf(" %-2d", i);
    }
    printf("\n");
    int numWeeks = 6;
    printWeeks(numWeeks, 7-pos+1, month);
    if(m == 12)
    {
        m = 0;
    }
    m++;
    char c = firstDay;
    print_month(m, next_month_first_day(m, c), length-1, months);
}
void printWeeks(int num, int starting_num,int month)
{
    if(num == 0)
    {
        return;
    }
    else
    {
        for(int i = 1; i < 8;i++)
        {
           if(month == 1 && starting_num > 31) return;
           if(month == 2 && starting_num > 28) return;
           if(month == 3 && starting_num > 31) return;
           if(month == 4 && starting_num > 30) return;
           if(month == 5 && starting_num > 31) return;
           if(month == 6 && starting_num > 30) return;
           if(month == 7 && starting_num > 31) return;
           if(month == 8 && starting_num > 31) return;
           if(month == 9 && starting_num > 30) return;
           if(month == 10 && starting_num > 31) return;
           if(month == 11 && starting_num > 30) return;
           if(month == 12 && starting_num > 31) return;
            printf(" %-2d",  starting_num);
            starting_num++;
        }
        printf("\n");
        int s = starting_num;
        int m = month;
        int n = num;
        printWeeks(n-1, s, m);
    }
}
