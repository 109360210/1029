#include<stdio.h>
#include<stdlib.h>
int main()
{
	float x, y;
a:printf("Enter sales in dollars(-1 to end): ");
	scanf_s("%f", &x);
	while (x != -1)
	{
		
		y = 0.09*x + 200;
		printf("Salary is :$ %.2f\n", y);
		goto a;
	}
	system("pause");
	return 0;
}