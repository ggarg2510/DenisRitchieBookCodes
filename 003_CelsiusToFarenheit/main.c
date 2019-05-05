
#include <stdio.h>

void main()
{
	float c=0,f;
	char flag=0;
	
	while(c<200)
	{
		if(flag == 0)
		{
			flag = 1;
			printf("Celsius  \t Farenheit\n");
			printf("=======  \t =========\n");
		}
		f = ((9.0/5.0)*c) + 32.0;
		printf("%6.2f\t\t%7.2f\n", c,f);
		c+=20.0;
	}
}
