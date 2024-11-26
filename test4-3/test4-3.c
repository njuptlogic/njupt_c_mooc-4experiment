#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ����ѧ���ṹ��
struct Student {
    char ID[20];
    char name[30];
    int age;
    double score;
};

// ��������
void CreateFile(struct Student students[], int n);
void ReadOut();
void Sort(struct Student students[], int n);

int main() {
    int n;
    struct Student students[40];

    printf("������༶ѧ�����������40������");
    scanf("%d", &n);
    if (n > 40 || n <= 0) {
        printf("ѧ��������Ч��������1��40֮�䡣\n");
        return 1;
    }

    // �Ӽ�������ѧ����Ϣ
    for (int i = 0; i < n; i++) {
        printf("�������%d��ѧ������Ϣ��\n", i + 1);
        printf("ѧ��: ");
        getchar(); // ������뻺�棬�����ȡ�������з�
        fgets(students[i].ID, sizeof(students[i].ID), stdin);
        students[i].ID[strcspn(students[i].ID, "\n")] = '\0'; // ȥ�����з�

        printf("����: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // ȥ�����з�

        printf("����: ");
        scanf("%d", &students[i].age);

        printf("�ɼ�: ");
        scanf("%lf", &students[i].score);
    }

    // ��ѧ����Ϣд���ļ�
    CreateFile(students, n);

    // ���ļ���ȡ����ʾ��Ϣ
    ReadOut();

    // ���ɼ�������ʾ
    Sort(students, n);
    printf("\n������ѧ����Ϣ���ɼ��Ӹߵ��ͣ�\n");
    for (int i = 0; i < n; i++) {
        printf("ѧ��: %s, ����: %s, ����: %d, �ɼ�: %.2f\n", students[i].ID, students[i].name, students[i].age, students[i].score);
    }

    return 0;
}

// �����ļ���д��ѧ����Ϣ
void CreateFile(struct Student students[], int n) {
    FILE* file = fopen("D:\\Info.dat", "wb");
    if (file == NULL) {
        printf("�޷����ļ�����д�룡\n");
        exit(1);
    }

    fwrite(students, sizeof(struct Student), n, file); // ������д��ѧ����Ϣ
    fclose(file);
}

// ���ļ��ж�ȡѧ����Ϣ�����
void ReadOut() {
    FILE* file = fopen("D:\\Info.dat", "rb");
    if (file == NULL) {
        printf("�޷����ļ����ж�ȡ��\n");
        exit(1);
    }

    struct Student student;
    printf("\n���ļ��ж�ȡ��ѧ����Ϣ��\n");
    while (fread(&student, sizeof(struct Student), 1, file)) {
        printf("ѧ��: %s, ����: %s, ����: %d, �ɼ�: %.2f\n", student.ID, student.name, student.age, student.score);
    }

    fclose(file);
}

// ���ɼ��Ӹߵ�������ѧ����Ϣ
void Sort(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].score < students[j].score) {
                // ����ѧ����Ϣ
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}
