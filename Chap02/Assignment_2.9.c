/*
 * ���ϸ�: assign_09.c
 * ����: 16���� ������ �Է¹޾� 10������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: �̻�
 * �й�: 202111022
 * �ۼ���: 2025.3.31
 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num;  // 16���� ���� ������ ����

    printf("16���� ����? ");
    scanf("%x", &num);  // 16���� �Է� �ޱ�

    printf("16���� %x�� 10������ %d�Դϴ�.", num, num);

    return 0;
}