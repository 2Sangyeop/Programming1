/*****************************************************************************************************
   * ���ϸ�: assign_18.c

   * ����: ���� ����Ʈ�� �÷��̸���Ʈ ����� �����Ϸ��� �Ѵ�. �̹� ��ϵ� SONG ����ü �迭�� ���� ��,
           ��ü �� ����� �����ְ� ����ڷκ��� �÷��̸���Ʈ�� �߰��� �뷡�� ��ȣ�� �����ϰ� �Ѵ�. 
           �÷��̸���Ʈ�� �뷡�� �߰��� ������ �÷��̸���Ʈ�� �� ��ϰ� ��ü ��� �ð��� �������� ����Ѵ�.
           �÷��̸���Ʈ���� �ִ� 5� ����� �� �ִ�. 

   * �ۼ���: �̻�

   * ��¥: 2025.06.06
   * 
   * ����: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_SONGS 8
#define MAX_PLAYLIST 5
#define MAX_TITLE 50
#define MAX_ARTIST 50
#define MAX_GENRE 20

struct SONG 
{
    char title[MAX_TITLE];
    char artist[MAX_ARTIST];
    char genre[MAX_GENRE];
    int time;  
};

void print_songlist(struct SONG songs[], int count);
void print_playlist(struct SONG* playlist[], int count);
int assign_18(void);


int main() 
{
    assign_18();
    return 0;
}

// �÷��̸���Ʈ ��� ���� �Լ�
int assign_18() 
{
    struct SONG songs[MAX_SONGS] = 
    {
        {"thank u, next", "Ariana Grande", "pop", 208},
        {"Attention", "Charlie Puth", "pop", 211},
        {"�� ���� ����", "�ں���", "ballad", 316},
        {"How Long", "Charlie Puth", "pop", 198},
        {"I'm Fine", "��ź�ҳ��", "hip-hop", 209},
        {"����", "��ź�ҳ��", "hip-hop", 274},
        {"Awake", "��ź�ҳ��", "ballad", 226},
        {"�Ƴ���", "MINO", "hip-hop", 241}
    };

    struct SONG* playlist[MAX_PLAYLIST];
    int playlist_count = 0;
    int total_time = 0;
    int choice;

    print_songlist(songs, MAX_SONGS);

    while (playlist_count < MAX_PLAYLIST) 
    {
   
        printf("�÷��̸���Ʈ�� �߰��� �� ��ȣ? ");
        scanf("%d", &choice);

        if (choice < 1 || choice > MAX_SONGS) 
        {
            printf("�߸��� �� ��ȣ�Դϴ�.\n");
            continue;
        }

        playlist[playlist_count] = &songs[choice - 1];
        total_time += songs[choice - 1].time;
        playlist_count++;

        printf("�� �÷��̸���Ʈ ��\n");
        print_playlist(playlist, playlist_count);
        printf("�� ����ð� : %d��\n\n", total_time);
    }

    return 0;
}

// ��ü �� ��� ����Լ�
void print_songlist(struct SONG songs[], int count) 
{
    printf("\n����\t\t\t��Ƽ��Ʈ\t�帣\t����ð�\n");
    for (int i = 0; i < count; i++) 
    {
        printf("%d: %-20s %-15s %-10s %d��\n", 
            i + 1,songs[i].title, songs[i].artist, songs[i].genre, songs[i].time);
    }
}

// �÷��̸���Ʈ ����Լ�
void print_playlist(struct SONG* playlist[], int count) 
{
    for (int i = 0; i < count; i++) 
    {
        printf("%-20s %-15s %-10s %d��\n",
            playlist[i]->title, playlist[i]->artist, playlist[i]->genre, playlist[i]->time);
    }
}