/*
 * ���ϸ�: assign_05.c
 * ����: �����Ը� �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
       + �����Դ� �Ǽ��� �Է¹�����, �Ҽ��� ���� 2�ڸ� ������ ����Ѵ�.
 * �ۼ���: �̻�
 * �й�: 202111022
 * �ۼ���: 2025.3.31
 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float weight;

    printf("������? ");
    scanf("%f", &weight);

    printf("�Է��� �����Դ� %.2f�Դϴ�.", weight);

    return 0;
}