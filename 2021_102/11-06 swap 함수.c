#include <stdio.h>

//void print(int* ptr);
void print(int ptr[]);
void erase(void);

void main(void)
{
	int arr[4] = { 10,20,30,40 };
	print(arr);
}

//배열의 모든 요소를 출력
void print(int ptr[])
{
	//i<4는 배열의 크기가 4인것만 가능함(구조적 결함)
	for (int i = 0; i < 4; i++) {
		//printf("%d ",*(ptr+i));
		printf("%d", ptr[i]);
	}
	//print("\n");
}

void erase(void)
{

}