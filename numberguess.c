#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int irandom = 0;
	int iresponse = 0;
	srand(time(NULL));

	while (1)
	{
		irandom = (rand() % 10) + 1;

		printf("Enter a number between 1-10 and 0 to exit: ");
		scanf("%d", &iresponse);

		if isdigit(iresponse == 0)
		{
			printf("Please enter a valid number\n");
		}
		if (iresponse == irandom)
		{
			printf("That is correct!\n");
		}
		if (iresponse == 0)
		{
			exit(0);
		}
		else
		{
			printf("Wrong, the random number is:%d\n", irandom);
		}
	}
	return (0);
}
