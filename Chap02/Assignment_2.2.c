/*
 * ���ϸ�: assign_02.c
 * ����: �л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
        + �л��� ��ȣ�� ������, ������ �Ǽ��� �Է¹޴´�.
 * �ۼ���: �̻�
 * �й�: 202111022
 * �ۼ���: 2025.3.31
 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num;        // �л� ��ȣ ������ ����
    double grade;   // �л� ���� ������ ����

    printf("��ȣ? ");
    scanf("%d", &num);  // & �߰��ؼ� �ּ� �����ϱ�*

    printf("����? ");
    scanf("%lf", &grade);


    printf("%d�� �л��� ������ %.6lf�Դϴ�.\n", num, grade);

    return 0;
}