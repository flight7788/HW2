#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	float rate, salary;
	int hour;

	while (1)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf_s("%d", &hour);
		if (hour == -1)
		{
			break;
		}
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &rate);
		if (hour > 40)
		{
			salary = (hour - 40)*rate*1.5 + 40 * rate;
		}
		else
		{
			salary = (hour)*rate;
		}

		printf("Salary is $%.2f\n\n", salary);

	}
}