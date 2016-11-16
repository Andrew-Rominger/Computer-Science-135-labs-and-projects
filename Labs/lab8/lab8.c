#include <stdio.h>
#include <math.h>

void printEvenSquares();
void countVowels();
void calculatePi();
float pi(int n);
int main()
{
	printf("1.Print Even Squares\n2.Count Vowels\n3.Calculate Pi\n4.Exit\nSelection: ");
	char c = getchar();
	switch(c)
	{
		case '1':
			printEvenSquares();
			break;
		case '2':
			countVowels();
			break;
		case '3':
			calculatePi();
			break;
		case '4':
			exit(1);
		default:
			break;		
	}
	return 1;
}

void printEvenSquares()
{
	int num,i;
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	if(num <= 0)
	{
		return;
	}
	for(i = 2; i <= sqrt(num);i+=2)
	{
		if(!(num % 2))
		{
			printf("%d", i * i);
		}

		if(i + 2 > sqrt(num))
		{
			printf(".\n");	
			return;
		}
		else
		{
			printf(",");
		}
	}
}
void countVowels()
{
	char arr[10] = {'A', 'a','E', 'e','I', 'i','O', 'o','U', 'u'};
	char c;
	int track = 0;
	printf("Enter a string: ");
	while((c = getchar()) != '.')
	{
		int i;
		for(i = 0; i < 10;i++)
		{
			if(arr[i] == c)
			{
				track++;
			}
		}
	}
	printf("Number of vowels: %d\n", track);		
}

void calculatePi()
{
	int itr;
	printf("Enter number of iterations: ");
	scanf("%d", &itr);
	printf("Estimate of pi to %d iterations: %f\n",itr, pi(itr));
}
float pi(int n)
{
	if(n == 0)
	{
		return 4.0f;
	}
	else if(!(n % 2))
	{
		return pi(n-1) + (4.0f/((2.0f * (float)n)+1));
	}else
	{
		return pi(n-1) - (4.0f/((2.0f * (float)n)+1));
	}
}
