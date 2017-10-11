#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int width, length,W,L;

	while (1)
	{
		printf("Enter width (-1 to end): ");
		scanf_s("%d", &width);
		if (width == -1)
		{
			break;
		}
		printf("Enter length: ");
		scanf_s("%d", &length);
		
		printf("\n	");
		for (L = 0; L < length; L++)
		{
			if (L != 0 && L != (length - 1))
			{
				for (W = 0; W < width; W++)
				{
					if (W == 0 || W == (width - 1))
					{
						printf("+");
					}
					else
					{
						printf(" ");
					}
				}
			}
			else
			{
				for (W = 0; W < width; W++)
				{
					printf("+");
				}
			}
			printf("\n	");
		}
		printf("\n\n");
	}
}