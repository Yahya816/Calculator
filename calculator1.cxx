#include <stdio.h>
#include <string.h>

int main()
{
	char oprator;
	double first, second;
	do
	{
		printf("\n\n\tuse oprator (+ , - , * , /) \n\n");
		printf("type like this a+b : ");

		scanf("%lf%c%lf", &first, &oprator, &second);

		printf("\n THE ASWER IS  : ");

		switch (oprator)
		{
		case '+':
			printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
			break;
		case '-':
			printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
			break;
		case '*':
			printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
			break;
		case '/':
			printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
			break;

		default:
			printf("Error! operator is not correct❌\n\n\tType question like this (a+b) ");
		}
		
		printf("\n\n\n\t\t\t\t       - made by YAHYA\n\n");


		char jp[20];
		scanf("%s", &jp);

		if (strcmp(jp, "exit") == 0){
			printf("\n\n\n\n \t\t\t - EXIT -");
			break;
		}
		else{
			continue;
		}

	} while (true);

	return 0;
	
}
