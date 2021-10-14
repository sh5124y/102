#include <stdio.h>

//반환형과 매개변수가 있다면 각각의 의미를 서술하시오
void order(void);

void main(void)
{
	int 금액 = 3000;
	int 코카콜라 = 700, 써니텐 = 600, 포카리스웨트 = 800;
	int num;

	while (1)
	{
		printf("현재금액 %d\n", 금액);
		printf("1. 코카콜라:700원\n");
		printf("2. 써니텐:600원\n");
		printf("3. 포카리스웨트:800원\n");
		printf("구매할 물건의 버튼을 입력하시오 ");
		scanf_s("%d", &num);
		// 자판기에서 물건을 주문을 하는 함수 order를 호출한다.
		// 코카콜라, 써니텐, 포카리스웨트 중 하나의 버튼을 누르면 order함수가 이를 처리한다.

		printf("\n");
	}
}

void order(void)
{

}