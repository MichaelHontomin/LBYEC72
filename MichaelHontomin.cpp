#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

float area;
float radius;
void printNameCourse();
float computeCircleArea(float radius);

int main()
{
	printNameCourse();
	
	radius=10;
	area=computeCircleArea(radius);
	printf("The area is %f\n", area);

system("pause");
return 0;
}

float computeCircleArea(float functionradius)
{
	return PI*functionradius*functionradius;
}

void printNameCourse()
{
	printf("Michael Hontomin\n");
	printf("Hello LBYEC72!\n");
}
