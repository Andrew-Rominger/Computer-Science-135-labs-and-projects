#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int numA,numB,numC,numD,numF, numGrades;
float average;

void addNewGrad();
void computeAverage();
void printAverage();
void clearGrades();
void printNumGrades();
void printSpecificGradeReport();
void promptUser();

void addNewGrad()
{
	char ch;
	printf("Enter a new grade (allowed values: A, B, C, D, F): ");
	scanf(" %c", &ch);
	if(ch == '\n') return;
	switch(ch)
	{
		case 'A':
			numA++;
			numGrades++;
			break;
		case 'B':
			numB++;
			numGrades++;
			break;
		case 'C':
			numC++;
			numGrades++;
			break;
		case 'D':
			numD++;
			numGrades++;
			break;
		case 'F':
			numF++;
			numGrades++;
			break;
		default:
			printf("Invalid command\n");
			do
			{
				scanf("%c", &ch);
			}
			while(ch != '\n');
			return;
	}
	printf("\nGrade %c Entered\n", ch);
	promptUser();
}
void printAverage()
{
	if(numGrades == 0)
	{
		printf("No grades have been entered yet\n");
		promptUser();
	}
	int totalScore = numA*4 + numB*3 + numC*2 + numD;
	average =(float) totalScore / (float) numGrades;
	printf("Current average is: %.2f\n", average);
	promptUser();
}
void clearGrades()
{
	numA = 0;
	numB = 0;
	numC = 0;
	numD = 0;
	numF = 0;
	numGrades = 0;
	average = 0.0;
	printf("Grade sheet has been cleared.\n");
	promptUser();
}
void printNumGrades()
{
	printf("Current number of grades entered is: %d\n", numGrades);
	promptUser();
}
void printSpecificGradeReport()
{
	printf("Enter the grade for the report (allowed values: A, B, C, D, F): ");
	int num = 0;
	char ch;
	scanf(" %c", &ch);
	switch(ch)
	{
		case 'A':
			num = numA;
			break;
		case 'B':
			num = numB;
			break;
		case 'C':
			num = numC;
			break;
		case 'D':
			num = numD;
			break;
		case 'F':
			num = numF;
			break;
		default:
			printf("Invalid command\n");
			do
			{
				
				scanf("%c", &ch);
			}
			while(ch != '\n');
			return;
	}
	printf("Total number of %c grades is: %d\n", ch, num);
	promptUser();
}
void promptUser()
{
	char ch;
	printf("This program maintains a class grade sheet. Options: \n1 - enter new grade\n2 - print current average\n3 - clear grade sheet\n4 - print total number of grades\n5 - print grade report\n6 - quit the program\n");
	scanf(" %c", &ch);
	
	switch(ch)
	{
		case '1':
			addNewGrad();
			break;
		case '2':
			printAverage();
			break;
		case '3':
			clearGrades();
			break;
		case '4':
			printNumGrades();
			break;
		case '5':
			printSpecificGradeReport();
			break;
		case '6':
			exit(0);
			break;
		default:
			printf("Invalid command\n");
			do
			{
				scanf("%c", &ch);
			}
			while(ch != '\n');
			
	}
	promptUser();
}
int main()
{
	promptUser();
	return 0;
}

