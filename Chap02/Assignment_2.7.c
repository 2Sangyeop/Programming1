/*
 * ���ϸ�: assign_07.c
 * ����: Ŀ�ǻ����� (S, T, G)�� �ֹ� ������ �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
        + Ŀ�� ������� S, T, G �� ���� ���� �� �ϳ��� �Է¹޴´�.
 * �ۼ���: �̻�
 * �й�: 202111022
 * �ۼ���: 2025.3.31
 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char size[10];
    int num;

    printf("Ŀ�� ������ (S,T,G)�� �ֹ�����? ");
    scanf("%s %d", size, &num);

    printf("%s ������ %d���� �ֹ��մϴ�.", size, num);

    return 0;
}