#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int radius;
	double area;

	printf("반지름을 입력하시오: ");
	scanf("%d",&radius);

	area = 3.14 * radius * radius;

	printf("원의 면적: %lf\n",area);


	return 0;

}