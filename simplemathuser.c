#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int x = 0;
	int y = 0;
	int f = 0;

	printf("this program gives the result of this formulae f = (a - b) * (x - y)\n");
	printf("Enter value for a: ");
	scanf("%d", &a);
	printf("Enter value for b: ");
	scanf("%d", &b);
	printf("Enter value for x: ");
	scanf("%d", &x);
	printf("Enter value for y: ");
	scanf("%d", &y);

	f = (a - b) * (x - y);
	printf("your answer is %d\n", f);
}
