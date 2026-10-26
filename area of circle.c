#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
	float r,a;
	printf("Enter the radius of circle\n");
	scanf("%f",&r);
	a=PI*pow(r,2);
	printf("Area of circle is %f",a);
	return 0;
	
}
