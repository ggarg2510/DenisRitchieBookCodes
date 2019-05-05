
#include <stdio.h>

void main()
{
	float c=0;
	int f=0;
	char flag=0;
	while(f<=300)
	{		

		if(flag == 0)
		{
			flag = 1;
			printf("Farenheit   Celcius\n");
			printf("=========   =======\n");
		}
		c = (5.0/9.0)*(f-32.0);
		printf("%3d\t%10.2f\n", f, c);
		f+=20;
	}
}
