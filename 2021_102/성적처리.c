#include <stdio.h>

void cal_grade(int score);
double cal_average(int score_a, int score_b, int score_c);

void main(void)
{
    // [0] �����, [1] �ڹ�, [2] ��ǻ�ͱ���
    int score[3];

    printf("����� ������ �Է��ϼ��� : ");
    scanf("%d", &score[0]);
    cal_grade(score[0]);

    printf("�ڹ� ������ �Է��ϼ��� : ");
    scanf("%d", &score[1]);
    cal_grade(score[1]);


    printf("��ǻ�ͱ��� ������ �Է��ϼ��� : ");
    scanf("%d", &score[2]);
    cal_grade(score[2]);

    double average = cal_average(score[0], score[1], score[2]);
    printf("�� ������ ����� %f�Դϴ�.", average);

}

// �Է¹��� ����(score)�� ���� ����� ���
void cal_grade(int score)
{
    if (90 <= score && score <= 100)
        printf("A�Դϴ� \n");
    else if (80 <= score)
        printf("B�Դϴ� \n");
    else if (70 <= score)
        printf("C�Դϴ� \n");
    else if (60 <= score)
        printf("D�Դϴ� \n");
    else
        printf("E�Դϴ� \n");
}

//�� ������ ����� ��ȯ
double cal_average(int score_a, int score_b, int score_c)
{
    return(double)(score_a + score_b + score_c) / 3.0;
}