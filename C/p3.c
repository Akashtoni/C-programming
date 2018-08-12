#include<stdio.h>

int main() 
{
	int a,i,j;
	printf("Enter the number of stars: \n");
	scanf("%d",&a);

	for(i=4;i<=a;i--)
	{
		for(j=1;j<=i;j++)
		{
		printf("*");
		}
	printf("\n");
	}
}
