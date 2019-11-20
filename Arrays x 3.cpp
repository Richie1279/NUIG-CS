#include <stdio.h>
#include <string.h>

void main()
{
	char string1[21] = "x0mTuUvej0CJtQwJ4hp7";
	char string2[21] = "esSkl4k6rBAohk2fS8Ow";
	char string3[21] = "mGYYDLMcNBZoUaKjquwx";

	int i = 0;

	printf("original string is x0mTuUvej0CJtQwJ4hp7\n");

	int num = 0, upper = 0, lower = 0;
	

	for (i = 0; i < 20; i++)
	{
		if (string1[i] >= '0' && string1[i] <= '9')
		{
			string1[i] = '*';
			num++;
		}

		else if (string1[i] >= 'A' && string1[i] <= 'Z')
		{
			string1[i] = string1[i] + 32;
			upper++;
		}
		else if (string1[i] >= 'a' && string1[i] <= 'z')
		{
			string1[i] = string1[i] - 32;
			lower++;
		}
	}

	printf("new string1: %s\n numbers changed: %d    uppercase letters changed: %d    lowercase letters changed: %d\n\n", string1, num, upper, lower);
	
	printf("original string is esSkl4k6rBAohk2fS8Ow \n");

	num = 0, upper = 0, lower = 0;

	for (i = 0; i < 20; i++)
	{
		if (string2[i] >= '0' && string2[i] <= '9')
		{
			string2[i] = '*';
			num++;
		}

		else if (string2[i] >= 'A' && string2[i] <= 'Z')
		{
			string2[i] = string2[i] + 32;
			upper++;
		}
		else if (string2[i] >= 'a' && string2[i] <= 'z')
		{
			string2[i] = string2[i] - 32;
			lower++;
		}
	}

	printf("new string2: %s\n numbers changed: %d     uppercase letters changed: %d      lowercase letters changed: %d\n\n", string2, num, upper, lower);

	printf("original string is mGYYDLMcNBZoUaKjquwx\n");

	num = 0, upper = 0, lower = 0;

	for (i = 0; i < 20; i++)
	{
		if (string3[i] >= '0' && string3[i] <= '9')
		{
			string3[i] = '*';
			num++;
		}

		else if (string3[i] >= 'A' && string3[i] <= 'Z')
		{
			string3[i] = string3[i] + 32;
			upper++;
		}
		else if (string3[i] >= 'a' && string3[i] <= 'z')
		{
			string3[i] = string3[i] - 32;
			lower++;
		}
	}
	printf("new string3: %s\n numbers changed: %d       uppercase letters changed: %d        lowercase letters changed: %d", string3, num, upper, lower);
}

	






	

	


