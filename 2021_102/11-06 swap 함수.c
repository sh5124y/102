#include <stdio.h>

void Swap(int* num1, int* num2);

void main(void)
{
	int a = 10, b = 20;
	printf("�ٲٱ� �� a: %d b:%d\n", a, b);
	Swap(&a, &b);
	printf("�ٲٱ� �� a: %d b:%d\n", a, b);
}

void Swap(int* num1, int* num2)
{
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;

}