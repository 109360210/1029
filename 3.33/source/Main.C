#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x, y, i, j;
	printf("請輸入lenth:");
	scanf_s("%d", &x);
	printf("請輸入breadth:");
	scanf_s("%d", &y);
	for (j = 0; j < y; j++)
	
	{
		for (i = 0; i < x; i++)
		{
			if ((i==0) || (i==(x-1)) || (j == 0) || (j == (y-1)))
			{
				printf("+");
				
			}
			else 
			{
				printf(" ");
					
			}
			
		}
		printf("\n");
	}
	system("pause");
}

