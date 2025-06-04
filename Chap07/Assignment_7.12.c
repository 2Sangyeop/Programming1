/*****************************************************************************************************
   * ���ϸ�: assign_12.c

   * ����: ����ǥ ���� ���α׷��� �ۼ��Ϸ��� �Ѵ�. ������ ������ ���� �¼��� ��� 10����� ����.
           ������ �¼����� �Է¹޾� �� �ڸ��� �Ҵ��Ѵ�. ������ ������ �� �¼��� ���¸� ����Ѵ�.
           O�̸� ���� ����, X�� ���� �Ұ��� �ǹ��Ѵ�. �� �̻� ������ �� ������ ���α׷��� �����Ѵ�.

   * �ۼ���: �̻�

   * ��¥: 2025.05.30.

   * ����: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_seats(char seats[], int size);
void buy_seats(char seats[], int size);
int assign_12(void);

int main()
{
    assign_12();
    return 0;
}

int assign_12(void)
{
    char seats[10];
    int total = 10;

    // �¼� 
    for (int i = 0; i < total; i++)
    {
        seats[i] = 'O';
    }

    while (1)
    {
        print_seats(seats, total);

        // ���� ������ �¼��� ���� �ִ��� Ȯ��
        int available = 0;
        for (int i = 0; i < total; i++)
        {
            if (seats[i] == 'O')
                available++;
        }

        if (available == 0)
        {
            printf("�� �̻� ������ �� �����ϴ�.\n");
            break;
        }

        buy_seats(seats, total);
    }

    return 0;
}

// �¼� ���� ��� �Լ�
void print_seats(char seats[], int size)
{
    printf("�����¼�: [ ");
    for (int i = 0; i < size; i++)
    {
        printf("%c ", seats[i]);
    }
    printf("]\n");
}

// �¼� ���� �Լ�
void buy_seats(char seats[], int size)
{
    int count;
    printf("������ �¼���? ");
    scanf("%d", &count);

    if (count <= 0)
    {
        printf("�߸��� �¼� ���Դϴ�.\n");
        return;
    }

    int sold = 0;
    printf("���ŵ� �¼� ��ȣ: ");
    for (int i = 0; i < size && sold < count; i++)
    {
        if (seats[i] == 'O')
        {
            seats[i] = 'X';
            printf("%d ", i + 1);
            sold++;
        }
    }
    printf("�� �¼��� �����߽��ϴ�.\n");
}