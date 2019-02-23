#include<stdio.h>

int main(void)
{
	int pri, time;
	float rate, si;
	pri = 2000;
	time = 4;
	rate = 9.5;
	si = pri * time * rate / 100;
	printf("The calculated simple interest is %f", si);
	return(0);
}
