#include<stdio.h>

void main(void)
{
	unsigned int a = 0x00FF0000;
	printf("%u\n", a);

	int* ptra = &a;
	printf("%u\n", *ptra);

	char* ptrc = (char*)&a;
	printf("%u\n", *ptrc);
}