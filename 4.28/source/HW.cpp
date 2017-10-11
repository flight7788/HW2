#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int type;

	while (1)
	{
		printf("(1)經理人員 (2)時薪工 (3)抽佣金 (4)零工\n");
		printf("請輸入薪資代碼(-1 to end): ");
		scanf_s("%d",&type);
		if (type == -1)
		{
			break;
		}
		switch (type) 
		{
			case 1:
			{
					   float salary = 0;
					   printf("請輸入固定周薪: ");
					   scanf_s("%f", &salary);
					   printf("薪水:%.2f\n\n", salary);
					   break;
			}
			case 2:
			{
					   float rate, salary;
					   int hour;  

					   printf("請輸入工作時數: ");
					   scanf_s("%d", &hour);
					   printf("請輸入每小時工資: ");
					   scanf_s("%f", &rate);
					   if (hour > 40)
					   {
						   salary = (hour - 40)*rate*1.5 + 40 * rate;
					   }
					   else
					   {
						   salary = (hour)*rate;
					   }

					   printf("薪水:%.2f\n\n", salary);
					   break;
			}
			case 3:
			{
					   float week_sale, salary;

					   printf("請輸入當週銷售金額: ");
					   scanf_s("%f", &week_sale);
					   salary = (float)( (week_sale*0.057) + 250);
					   printf("薪水:%.2f\n\n", salary);
					   break;
			}
			case 4:
			{
					   float num_pieces, pieces, salary;

					   printf("請輸入每件產品工資: ");
					   scanf_s("%f", &pieces);
					   printf("請輸入件數: ");
					   scanf_s("%f", &num_pieces);
					   salary = (float)pieces*num_pieces;
					   printf("薪水:%.2f\n\n", salary);
					  
					   break;
			}
			default:
			break;
		}
	}

	return 0;
}