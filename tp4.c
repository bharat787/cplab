#include<stdio.h>
#include<string.h>

int main()
{
	char item[100], choice[100];
	int i, j;
	
	printf("What would you like to have ? \n");
	printf("1.) tea \n2.) parantha \n3.) maggi \n");
	//scanf("%s", item );
	scanf("%d", &j);
	if(j == 1)
		{
			printf(" What type -enter a number \n");
			printf("1.) black \n2.)green \n3.) masala");
		 	scanf("%d", &j);
			switch(j)
				{
					case 1: printf(" cost is 30 \n");
						break;
					case 2: printf(" cost is 20 \n");
						break;
					case 3: printf(" cost is 10 \n");
						break;
				}
		}
	else if(j == 2)
		{
			printf(" cost is 60 \n");
		}
	else if(j == 3)
		{
			printf(" cost is 26 \n");
		}
	else
		{
			printf("invalid input \n");
		}

	return 0;

}
