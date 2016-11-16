#include <stdio.h>
#include <limits.h>
void sum_average(int a[], int n, int *sum, float *average);
int* minimum (int a[], int n);
int* maximum (int a[], int n);

int main()
{
	int arr[10] = {};
	int i;
	printf("Enter the numbers: ");
	char a;
	for(i = 0;i < 10;i++)
	{
		scanf(" %d",&arr[i]);
	}
	int sum, min, max = 0;
	float average = 0;
	sum_average(arr,10,&sum,&average);
	printf("The sum is: %d\n", sum);
	printf("The average is: %f\n", average);
	printf("The min is: %d\n", *minimum(arr,10));
	printf("The max is: %d\n", *maximum(arr,10));
	return 0;
}

void sum_average(int a[],int n, int *sum, float *average)
{
	int total,i = 0;
	for(i = 0; i < n;i++)
	{
		total += a[i];
	}
	*sum = total;
	float av = (float)total/(float)n;
	*average = av;
}

int* minimum (int a[], int n)
{
	int min = INT_MAX;
	int i = 0;
	for(i = 0;i<n;i++)
	{
		if(a[i] < min)
		{
			min = a[i];
		}
	}
	return &min;
}
int* maximum(int a[], int n)
{
	int max = INT_MIN;
	int i = 0;
	for(i = 0;i<n;i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	return &max;
}

