
//this program is about the weight of boys

#include<stdio.h>

int main()
{
	int boy,n,count=0,weight,height;
	printf("Enter the number of Boys= ");
	scanf("%d", &boy);
	printf("Enter the weight and height= \n");

	for(n=1;n<=boy;n++)
	{
		
		scanf("%d %d \n", &weight, &height);
		
		if (weight < 50 && height > 170)
		
			count = count+1;
		
	}
	printf("The number of boys are %d \n", count);

}
