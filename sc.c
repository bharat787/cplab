#include<stdio.h>

int main(void)
{
int a, b, sum, diff, mult;
float div;
printf("Enter teo Numbers:");
scanf("%d", &a);
scanf("%d", &b);
sum = a + b;
diff = a - b;
mult = a * b;
div = (float)a/(float)b;
printf("%d %d %d %f", sum, diff, mult, div);
return(0);
}
