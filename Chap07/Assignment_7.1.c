/*****************************************************************************************************
   * ���ϸ�: assign_01.c

   * ����: ���������� ���� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�.
            ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä����� �Ѵ�.
            ù ��° ���� ���� ����(common difference)�� �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

   * �ۼ���: �̻�

   * ��¥: 2025.05.30.

   * ����: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fill_array(int arr[], int size, int first, int diff);
int assign_01(void);

int main()
{
    assign_01();
    return 0;
}

// ���������� �迭�� ä��� ����ϴ� �Լ�
int assign_01(void)
{
    int arr[10];
    int first, diff;

    printf("ù ��° ��? ");
    scanf("%d", &first);

    printf("����? ");
    scanf("%d", &diff);

    // ���������� �迭�� ä��
    fill_array(arr, 10, first, diff);

    // ��� ���
    printf("��������: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// �������� �Լ�
void fill_array(int arr[], int size, int first, int diff)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = first + i * diff;
    }
}