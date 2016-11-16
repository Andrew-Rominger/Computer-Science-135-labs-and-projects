#include <stdio.h>
int strnmerge(char *str, int n, char *s1, char *s2);
int read_line(char str[], int n);
int main()
{
	char final_string[100],string1[50],string2[50];
	printf("This program combines two strings.\nEnter string 1: ");
	read_line(string1,50);
	printf("Enter string 2: ");
	read_line(string2,50);
	strnmerge(final_string,100,string1,string2);
	printf("The combined string is: %s\n",final_string);
	return 0;
}

int strnmerge (char *str, int n, char *s1, char *s2)
{
	int i,track = 0;
	while(*s1 != '\0' || *s2 != '\0')
	{
		
		if(*s1 != '\0')
		{
				*str = *s1;
				s1++;
				str++;
				track++;
		}
		if(*s2 != '\0')
		{
				*str = *s2;
				s2++;
				str++;
				track++;
		}
	}
	*str = '\0';
	return track;
}

int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
	{
		if (i < n)
		{
			str[i++] = ch;
		}

	}
	str[i] = '\0'; /* terminates string */
	return i;
}
