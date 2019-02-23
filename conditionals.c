#include<stdio.h>
#include<string.h>

int main()
{
	char item[100], choice[100];
	int i;
	
	printf("What would you like to have ? \n");
	printf("1.) tea \n2.) parantha \n3.) maggi \n");
	scanf("%s", item );
	if(!strcmp(item, "tea"))
		{
			printf(" What type -enter a number \n");
			printf("1.) black \n2.)green \n3.) masala");
		 	scanf("%d", &i);
			switch(i)
				{
					case 1: printf(" cost is 30 \n");
						break;
					case 2: printf(" cost is 20 \n");
						break;
					case 3: printf(" cost is 10 \n");
						break;
				}
		}
	else if(!strcmp(item,"parantha"))
		{
			printf(" cost is 60 \n");
		}
	else if(!strcmp(item ,"maggi"))
		{
			printf(" cost is 26 \n");
		}
	else
		{
			printf("invalid input \n");
		}

	return 0;

}
