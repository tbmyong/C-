#include <stdio.h>

int main() {
	int a;
	int b;
	printf("a : ");
	scanf_s("%d", &a);
	printf("b : ");
	scanf_s("%d", &b);
	printf("�μ��� ��: %d\n", a + b);
	printf("�μ��� ��: %d\n", a - b);
	printf("�μ��� ��: %d\n", a * b);


	//���̸� �Է¹ް�
	//�¾ �⵵�� ��Ÿ���� ���α׷�

	int age;
	printf("����: ");
	scanf_s("%d", &age);
	printf("�¾ �⵵ :%d", 2024 - age);

	return 0;

}

