#include <stdio.h>

#define INITIAL_VALUE	300.0
#define END_VALUE		-25.0
#define STEP_CHANGE		5.5

void main()
{
	char flag = 0;
	float c;
	for(c=INITIAL_VALUE; c>=END_VALUE; c-=STEP_CHANGE)
	{
		if(flag == 0)
		{
			flag = 1;
			printf(" Celsius \t Farenheit\n");
			printf(" ======= \t =========\n");
		}
		printf("%8.2f \t %8.2f\n", c, ((9.0/5.0)*c)+32);
	}
}
