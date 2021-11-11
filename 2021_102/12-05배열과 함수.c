#include <stdio.h>

void print(int* ptr);
// void erase(int* ptr); �� ����
void erase(int ptr[]);


void main(void)
{
	int arr[4] = { 10, 20, 30, 40 };
	erase(arr);
	print(arr);
}

// �迭�� ��� ���(element)�� ���
void print(int* ptr)
{
	// i < 4�� �迭�� ũ�Ⱑ 4�ΰ͸� ������(������ ����)
	for (int i = 0; i < 4; i++) {
		//printf("%d ", *(ptr+i) );
		printf("%d ", ptr[i]);
	}
	printf("\n");
}


void erase(int ptr[])
{
	for (int i = 0; i < 4; i++) {
		// *(ptr+i) = 0
		ptr[i] = 0;
	}
}