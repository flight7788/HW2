#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int number;
	float balance, charges, credits, limit, new_balance;

	while (1)
	{
		printf("Enter account number (-1 to end): ");
		scanf_s("%d", &number);
		if (number == -1)
		{
			break;
		}
		printf("Enter beginning balance: ");
		scanf_s("%f", &balance);
		printf("Enter total charges: ");
		scanf_s("%f", &charges);
		printf("Enter total credits: ");
		scanf_s("%f", &credits);
		printf("Enter credit limit: ");
		scanf_s("%f", &limit);

		new_balance = balance + charges - credits;
		
		if (new_balance>limit)
		{
			printf("Account:      %d\n", number);
			printf("Credit limit: %.2f\n", limit);
			printf("Balance:      %.2f\n", new_balance);
			printf("Credit Limit Exceeded.\n\n");
		}
		else
		{
			printf("\n");
		}

	}
}