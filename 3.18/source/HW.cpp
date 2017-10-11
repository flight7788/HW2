#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	float dollars,salary;

	while (1)
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%f", &dollars);
		if (dollars == -1)
		{
			break;
		}

		salary = (dollars*0.09) + 200;
		printf("Salary is: $%.2f\n\n", salary);
			

	}
}