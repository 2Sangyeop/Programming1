/*****************************************************************************************************
   * ���ϸ�: assign_01.c

   * ����: ���ͳ� ����Ʈ�� �α��� �� �� ���Ǵ� ���̵�� �н����带 �����ϱ� ���� LOGIN ����ü�� �����Ͻÿ�.
           ���̵�� �н������ ���� �ִ� 20���ڱ��� �Է��� �� �ִ�. LOGIN ����ü ������ ������ ����
           ���̵�� �н����带 �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �н����带 ����� ���� 
           �н������� ������ ������ �ʵ��� �н����� ���� ����ŭ *�� ��� ����Ͻÿ�.

   * �ۼ���: �̻�

   * ��¥: 2025.06.06

   * ����: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 20

struct LOGIN 
{
    char id[MAX_SIZE];
    char password[MAX_SIZE];
};

void input_login(struct LOGIN* user);
void print_login(const struct LOGIN* user);
int assign_01(void);

int main()
{
    assign_01();

    return 0;
}
int assign_01() 
{
    struct LOGIN user;

    input_login(&user);     
    print_login(&user);      

    return 0;
}

// id, pw �Է� �Լ�
void input_login(struct LOGIN* user) 
{
    printf("ID? ");
    scanf("%20s", user->id);

    printf("Password? ");
    scanf("%20s", user->password);
}

// id, pw ��� �Լ�
void print_login(const struct LOGIN* user) 
{
    printf("ID: %s\n", user->id);

    printf("PW: ");
    for (int i = 0; i < strlen(user->password); i++) 
    {
        putchar('*');
    }
    printf("\n");
}