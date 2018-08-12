
#include<stdio.h>

int main()
{
	int a,b,c,d;
	float ratio;

	printf("Enter the value for the variables \n");
	scanf("%d %d %d %d", &a, &b, &c,&d);

	if (c-d !=0)
		{
			ratio=(float)(a+b)/(float)(c-d);
			printf("ratio= %f \n",ratio);
		}
	else
		printf("Error\n");
}
