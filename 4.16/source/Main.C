#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char sign = '*';
	char sign2 = ' ';
	int i, j;
	int temp;
	int temp2;

	//====================================
	printf("(A)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i >= j)
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
	
	//========================================================
	temp = 9;
	printf("(B)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j <= (9-i))
			{
				printf("%c", sign);
				
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
		//========================================================
		printf("(C)\n");
		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < 10; j++)
			{
				if (i <= j)
				{
					printf("%c", sign);
				}
				else
				{
					printf("%c", sign2);
				}
			}
			printf("\n");
		}
	
	//========================================================
	printf("(D)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((9-i) <= j)
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
}