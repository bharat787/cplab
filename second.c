#include<stdio.h>

int main()
{
	int max, num ,in, sec;
	printf(" Enter the number of inputs \n");
	scanf("%d", &num);
	
	printf(" Enter a value \n");
	scanf("%d", &in);
		
	max = in;
	
	for(int i = 1; i < num ; i++)
	{
		printf(" Enter a value \n");
		scanf("%d", &in);
		if( in > max)
		{	
			sec = max;
			max = in;
		}
		else
		{
			if(in > sec)
			sec = in;
		}
	
	}
		
	printf("second max is %d \n", sec);

	return 0;

}

		 
	
