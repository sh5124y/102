
void swap(int a, int b);

int main(void)
{
	int a = 10, b = 20;
	printf("�ٲٱ� �� a:%d b:%d \n");
	swap(&a, &b);
	printf("�ٲٱ� �� a:%d b:%d \n");
}

void swap(int num1, int num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}