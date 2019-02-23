#include<stdio.h>
#include<string.h>
#include

int main()
{
	char a[20], b[20], word[100];
	scanf("%s %s", a, b);
	scanf(" %[^\n]s ", word);
	for(int i = 0 ; i < strlen(word); i++)
	{
		printf("%c", word[i]);
	}
	printf(" \n %s, %s", a, b);
	printf(" %d ", strcmp(a, b));
	printf(" %d \n ", !strcmp(a, b));
	printf(" %c \n", a[3] );
	return 0;
}
