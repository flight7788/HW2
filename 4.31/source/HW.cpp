#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int i=0,count=0,k=0,j=0,type=0;
	char* text[2] = { "*", " " };

	for (i = 0; i < 9; i++)
	{
			for (j = 0; j < 9; j++)
			{
				if (j<=4+count && j>=4-count)
				{
					type = 0;
				}
				else
				{
					type = 1;
				}
				printf("%s", text[type]);
			}

			
			if (count == 4)
			{
				k = 1;
			}
			if (k == 0)
			{
				count++;
			}
			else if (k == 1)
			{
				count--;
			}

		    printf("\n");
	}


	system("pause");
	return 0;
}