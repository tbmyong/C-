#include <stdio.h>

int main() {
	int a;
	int b;
	printf("a : ");
	scanf_s("%d", &a);
	printf("b : ");
	scanf_s("%d", &b);
	printf("두수의 합: %d\n", a + b);
	printf("두수의 차: %d\n", a - b);
	printf("두수의 곱: %d\n", a * b);


	//나이를 입력받고
	//태어난 년도를 나타내는 프로그램

	int age;
	printf("나이: ");
	scanf_s("%d", &age);
	printf("태어난 년도 :%d", 2024 - age);

	return 0;

}

