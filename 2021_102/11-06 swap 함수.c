#include <stdio.h>

//void print(int* ptr);
void print(int ptr[]);
void erase(void);

void main(void)
{
	int arr[4] = { 10,20,30,40 };
	print(arr);
}

//�迭�� ��� ��Ҹ� ���
void print(int ptr[])
{
	//i<4�� �迭�� ũ�Ⱑ 4�ΰ͸� ������(������ ����)
	for (int i = 0; i < 4; i++) {
		//printf("%d ",*(ptr+i));
		printf("%d", ptr[i]);
	}
	//print("\n");
}

void erase(void)
{

}