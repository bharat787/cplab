#include<stdio.h>
#define PI 3.143
int main(void)
{
float area;
int rad;
printf("enter a number");
scanf("%d", &rad);
area = PI * rad * rad;
printf("the area of the circle is %f", area);

return(0);

}
