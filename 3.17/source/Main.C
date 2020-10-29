#include<stdio.h>
#include<stdlib.h>
int main()
{
	float x, y, z, w, v, b;

	a:printf("Enter account number(-1 to end): ");
	scanf_s("%f", &x);

	while (x != -1)
	{

		printf("Enter beginning balance: ");
		scanf_s("%f", &y);
		printf("Enter total charges: ");
		scanf_s("%f", &z);
		printf("Enter total credits: ");
		scanf_s("%f", &w);
		printf("Enter credit limit:");
		scanf_s("%f", &v);
		b = y + z - w ;
		
		if (v <= b)
		{
			printf("Account: %.0f\n", x);
			printf("Credit limit: %.2f\n", v);
			printf("Balance: %.2f\n", b);
			printf("Credit Limit Exceeded\n\n");
			goto a;
		}
		else
		{
			printf("\n");
			goto a;
		}

	}
	system("pause");
	return 0;

}