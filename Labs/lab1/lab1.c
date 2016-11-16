#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int quantity_1, quantity_2;
	float price_1, price_2;	
	float total_1, total_2, combinedTotal;
	
	printf("Enter the first item(quantity,price):");
	scanf("%d, %f", &quantity_1, &price_1);
	printf("Enter the second item(quantity,price):");
	scanf("%d, %f", &quantity_2, &price_2);

	total_1 = quantity_1 * price_1;
	total_2 = quantity_2 * price_2;
	combinedTotal = total_1 + total_2;

	printf("Total for item 1 = %f \n", total_1);
	printf("Total for item 2 = %f \n", total_2);
	printf("Total for both items = %f \n", combinedTotal);
	
	return 0;
}
