/*****************************************************************************************************
   * ���ϸ�: assign_10.c

   * ����: 3x3 ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ��ķ� ���� 2���� �迭�� ������� �ʱ�ȭ�ص� �ȴ�.

   * �ۼ���: �̻�

   * ��¥: 2025.05.30.

   * ����: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add_result(int x[][3], int y[][3], int result[][3], int row, int column);
void print_result(char* title, int result[][3], int row, int column);
int assign_10(void);

int main()
{
    assign_10();
    return 0;
}


int assign_10(void)
{
    int x[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int y[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int result[3][3];

    // ��� ���
    print_result("x ���:", x, 3, 3);
    print_result("y ���:", y, 3, 3);

    // ��� ����
    add_result(x, y, result, 3, 3);

    // ���� ��� ��� ���
    print_result("x + y ���:", result, 3, 3);

    return 0;
}

// ��� ���� �Լ�
void add_result(int x[][3], int y[][3], int result[][3], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            result[i][j] = x[i][j] + y[i][j];
        }
    }
}

// ��� ��� �Լ�
void print_result(char* title, int result[][3], int row, int column)
{
    printf("%s\n", title);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}