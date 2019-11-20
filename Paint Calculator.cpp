#include <stdio.h>
#include <string.h>

double calcArea(double height, double width);
double calcPaint(double area, double coats, double coverage);



void main()
{
	double wallheight = 0.0, windowheight = 0.0;
	double wallwidth = 0.0, windowwidth = 0.0;
	int end = 1, doors = 0, coats = 0;
	char fin = 0, window = 0;
	double area = 0.0, coverage = 0.0;

	for (int i = 0; i < end; i++)
	{
		printf("Enter Wall Height:");
		scanf_s("%lf", &wallheight);
		printf("\nEnter Wall Width:");
		scanf_s("%lf", &wallwidth);
		printf_s("\n Extra walls? (Y/N)\n");
		scanf_s("%c", &fin);


		area = area + calcArea(wallheight, wallwidth);

	

		if (fin == 'Y')
		{
			end++;
			printf("Total Wall Area = %lf\n", area);
		}
		else
		{
			printf("Total Wall Area = %lf\n", area);
			break;
		}
	}

	printf("How many doors/doubledoors? (Doubledoors count as 2 * door):");
	scanf_s("%d", &doors);
	area = area - (doors* 3);
	printf("\nAre there windows in the room? (Y/N)\n");
	scanf_s(" %c", &window);

	printf("Total wall area minus doors is: %lf", area);
	end = 1;



	if (window == 'Y')
	{
		for (int i = 0; i < end; i++)
		{
			printf("Enter window height:");
			scanf_s("%lf", &windowheight);
			printf("\nEnter window width:");
			scanf_s("%lf", &windowwidth);
			printf("\nMore windows? (Y/N)\n");
			scanf_s(" %c", &fin);

			area = area - calcArea(windowheight, windowwidth);

			if (fin == 'Y')
			{
				end++;
					printf("Total wall area minus windows= %lf\n", area);
			}
			else
			{
				printf("Total wall area minus windows= %lf\n", area);
				break;
			}
		}
	}
	else
	{
		printf("Total wall area = %lf\n", area);
	}

	printf("What is the coverage in m2 of the paint per litre?");
	scanf_s("%lf", &coverage);
	printf("\n how many coats of paint would you like?:");
	scanf_s("%d", &coats);

	double answer = 0;
		answer = answer + calcPaint(area, coats, coverage);
	printf("\nYou will require %lf litres of paint.", answer);

}

double calcArea(double h, double w)
{
	double area = 0.0;
	area = h * w;
	return area;

}

double calcPaint(double area, double coats, double coverage)
{
	double answer = 0.0;
	answer = (area* coats) / coverage;
	return answer;

}
	
	
	
	
	




