#include<stdio.h>
#include<stdlib.h>

int main()
{
	int side1, side2, side;
	printf("side1	side2	side(<=500)\n");
	for (side1 = 1; side1 <= 500; side1++)
	{
		for (side2 = 1; side2 <= 500; side2++)
		{
			for (side = 1; side <= 500; side++)
			{
				if ((side1*side1) + (side2*side2) == (side*side))
				{
					printf("%d	%d	%d\n", side1, side2, side);
				}
			}
		}
	}

	system("pause");
	return 0;
}