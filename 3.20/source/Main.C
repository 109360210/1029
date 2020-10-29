#include<stdio.h>
#include<stdlib.h>
int main()
{
	float x, y, z, w;

a:printf("Enter # of hours worked (-1 to end): ");
	scanf_s("%f", &x);

	while (x != -1)
	{

		printf("Enter hourly rate if the worker ($00.00): ");
		scanf_s("%f", &y);
		
		

		if (x <= 40)
		{
			z = x * y;
			printf("Salary is$ %.2f\n\n", z);
			
			goto a;
		}
		else
		{
			w = (x - 40)*1.5*y + 40 * y;
			printf("Salary is$ %.2f\n\n" ,w);
			goto a;
		}

	}
	system("pause");
	return 0;

}