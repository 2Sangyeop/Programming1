/*****************************************************************************************************
   * ���ϸ�: assign_03.c

   * ����: LOGIN ����ü �迭�� �̿��ؼ� �α��� ������ ���α׷����� �ۼ��Ͻÿ�. ���̵� �Է¹޾�
           LOGIN ����ü �迭���� ���̵� ã�� ���� �Է¹��� �н������ ��ϵ� �н����带 ���ؼ�
           ������ "�α��� ����"�̶�� ����Ѵ�. LOGIN ����ü �迭�� ũ�Ⱑ 5�� �迭�� �����ϰ� 
           ������ ������ �ʱ�ȭ�ؼ� ����Ѵ�.

   * �ۼ���: �̻�

   * ��¥: 2025.06.06

   * ����: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 20

struct LOGIN {
    char id[MAX_SIZE];
    char password[MAX_SIZE];
};

int try_login(struct LOGIN users[], int count, char input_id[], char input_pw[]);
int assign_03(void);

int main()
{
    assign_03();
    return 0;
}
int assign_03()
{
    struct LOGIN users[5] = 
    {
        {"guest", "Idontknow"},
        {"parkjisung", "manu123"},
        {"sonheungmin", "sonny"},
        {"leekangin", "paris123"},
        {"kimminjae", "german123"}
    };

    char input_id[MAX_SIZE];
    char input_pw[MAX_SIZE];

    while (1) 
    {
        printf("ID? ");
        scanf("%20s", input_id);

        printf("PW: ");
        scanf("%20s", input_pw);

        if (try_login(users, 5, input_id, input_pw)) {
            printf("�α��� ����\n");
            
            break;
        }
        else {
            printf("�α��� ����\n");
        }
    }

    return 0;
}

//�α��� �Լ�
int try_login(struct LOGIN users[], int count, char input_id[], char input_pw[])
{
    for (int i = 0; i < count; i++)
    {
        //���̵� Ȯ��
        if (strcmp(users[i].id, input_id) == 0) // ���̵� ��ġ
        {
            //��й�ȣ Ȯ��
            if (strcmp(users[i].password, input_pw) == 0) 
            {
                return 1; //�α��� ����
            }
            else
            {
                return 0; // �α��� ����
            }
        }
    }
    return 0; 
}