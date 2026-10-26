#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("Enter coefficients of x2 ,x and constant\n");
	scanf("%f%f%f",&a,&b,&c);
	float d=sqrt((b*b)-(4*a*c));
	float x1=((-b)+d)/(2*a);
	float x2=((-b)-d)/(2*a);
	printf("The roots are %f and %f",x1,x2);
	return 0;
}
