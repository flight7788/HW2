#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int i,n,type;
	const char *MESBOX[4] = { "A", "B", "C", "D" };

	for (type = 0; type < 4; type++)
	{
		printf("(%s)		", MESBOX[type]);
	}
	printf("\n");

	for (i = 0; i < 10; i++)
	{
		for (type = 0; type < 4; type++)
		{
			for (n = 0; n < 10; n++)
			{
				if (type == 0)
				{
					if (n <= i)
					{
						printf("%s", "*");
					}
					else
					{
						printf(" ");
					}
				}
				else if (type == 1)
				{
					if (n >= (10-i))
					{
						printf(" ");
					}
					else
					{
						printf("%s", "*");	
					}
				}
				else if (type == 2)
				{
					if (n>=i)
					{
						printf("%s", "*");
					}
					else
					{
						printf(" ");
					}
				}
				else if (type == 3)
				{
					if (n>=(9-i))
					{
						printf("%s", "*");
					}
					else
					{
						printf(" ");
					}
				}
				
			}
			printf("	");
		}
		printf("\n");
	}

	printf("\n");
	system("pause");
	return 0;
}