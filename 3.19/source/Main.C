#include<stdio.h>
#include<stdlib.h>
int main()
{
	float x, y, z, b;

a:printf("Enter loan principal(-1 to end): ");
	scanf_s("%f", &x);

	while (x != -1)
	{

		printf("Enter interest rate: ");
		scanf_s("%f", &y);
		printf("Enter term of the loan in days: ");
		scanf_s("%f", &z);

		b = x * y*z / 365;
		printf("The interest charge is:$ %.2f\n\n ", b);
		goto a;

	}
	system("pause");
	return 0;
}
		