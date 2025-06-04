/*****************************************************************************************************
   * ���ϸ�: assign_04.c

   * ����: Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� �迭�� ���� �� �ִ��� ���� ���ҿ� �ּڰ��� ���� ���Ҹ�
           ã�Ƽ� �ε����� ���� �Բ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
           �迭�� �ʱⰪ�� ������� ���Ͻÿ�.

   * �ۼ���: �̻�

   * ��¥: 2025.05.30.

   * ����: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void find_min_max(int arr[], int size);
int assign_04(void);

int main()
{
    assign_04();
    return 0;
}

// �迭���� �ִ�, �ּڰ��� ã�� ����ϴ� �Լ�
int assign_04(void)
{
    int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };

    printf("�迭: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    find_min_max(arr, 10);

    return 0;
}

// �迭�� ���� �� �ִ��� ���� ���ҿ� �ּڰ��� ���� ���Ҹ� ã�� �Լ�
void find_min_max(int arr[], int size)
{
    int max = arr[0], min = arr[0];
    int max_index = 0, min_index = 0;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            min_index = i;
        }
    }

    printf("�ִ�: �ε���=%d, ��=%d\n", max_index, max);
    printf("�ּڰ�: �ε���=%d, ��=%d\n", min_index, min);
}