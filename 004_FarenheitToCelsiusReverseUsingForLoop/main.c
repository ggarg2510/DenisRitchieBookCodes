#include <stdio.h>

void main()
{
	int f;
	char flag=0;
	for(f=300; f>=0; f-=20)
	{
		if(flag == 0)
		{
			flag = 1;
			printf("Farenheit  \t Celsius\n");
			printf("=========  \t =======\n");
		}
		printf("%4d \t\t %6.2f\n",f, (5.0/9.0)*(f-32.0));
	}
}
