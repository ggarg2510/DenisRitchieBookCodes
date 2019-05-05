#include <stdio.h>

void main()
{
	char flag=0;
	float c;
	for(c=150.0; c>=-25; c-=7.5)
	{
		if(flag == 0)
		{
			flag = 1;
			printf("Celsius \t Farenheit\n");
			printf("======= \t =========\n");
		}
		printf("%7.2f \t %7.2f\n", c, ((9.0/5.0)*c) + 32.0);
	}
}
