#include <stdio.h>

/**
 * main - performs simple arithmetic 
 * Return: int
 */

int main()
{
	int rprice = 0;
	int wprice = 0;
	int profit = 0;

	printf("Simple calc created by Rose.\n");
	printf("Enter product wholesale price: ");
	scanf("%d", &wprice);
	printf("Enter retail price: ");
	scanf("%d", &rprice);

	profit = wprice - rprice;
	printf("Your profit is %d\n", profit);
	return (0);

}

