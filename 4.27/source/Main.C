#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k ;
	int c = 0;
	for (i = 1; i <= 500; i++)
	{
		for (j = 1; j <= 500; j++)
		{
			for (k = 1; k <= 500; k++)
			{
				if ((i*i) == (j*j + k*k))
				{
					printf("%3d^2=%3d^2+%3d^2\n", i, j, k);
					c++;
				}
				
			}
		}
	}
	printf("count in %d\n", c);
	system("pause");
	return 0;
}
