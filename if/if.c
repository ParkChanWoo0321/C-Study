#include <stdio.h>
#include<time.h>
int main(void)
{
	int age = 25;
	if (age >= 20)
		printf("�Ϲ��� �Դϴ�.");
	else
		printf("�л��Դϴ�");

	int age = 138;
	if (age >= 8 && age <= 13)
	{
		printf("�ʵ��л��Դϴ�.\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("���л��Դϴ�.\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("����л��Դϴ�.\n");
	}
	else
	{
		printf("�л��� �ƴѰ�����.\n");
	}

	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("������ �л��� ���� ������.\n");
			break;
		}
		printf("%d �� �л��� ���� ��ǥ �غ� �ϼ���.\n", i);
	}

	for (int i = 1; i < 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d �� �л��� �Ἦ�Դϴ�.\n", i);
				continue;
			}
			printf("%d �� �л��� ���� ��ǥ �غ� �ϼ���\n", i);
		}
	}

	int a = 10;
	int b = 11;
	int c = 13;
	int d = 13;
	if (a == b || c == d)
	{
		printf("a �� b Ȥ�� c �� d �� ���� �����ϴ�.\n");
	}
	else
	{
		printf("���� ���� �ٸ��׿�\n");
	}

	// ���� 0 ���� 1 �� 2
 	srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		printf("����\n");
	}
	else if (i == 1)
	{
		printf("����\n");
	}
	else if (i == 2)
	{
		printf("��\n");
	}
	else
	{
		printf("�����\n");
	}

	srand(time(NULL));
	int i = rand() % 3;
	switch (i)
	{
	case 0: printf("����\n"); break;
	case 1: printf("����\n"); break;
	case 2: printf("��\n"); break;
	default: printf("�����\n"); break;
	}
	int age = 17;
	switch (age)
	{
	case8:
	case9:
	case10:
	case11:
	case12:
	case13:printf("�ʵ��л��Դϴ�.\n"); break;
	case14:
	case15:
	case16:printf("���л��Դϴ�.\n"); break;
	case17:
	case18:
	case19:printf("����л��Դϴ�.\n"); break;
	default:printf("�л��� �ƴѰ�����.\n"); break;
	}

	//Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1;//1~100
	printf("���� : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (1) // 1 : �� 0 : ����
	{
		printf("���� ��ȸ %d ��\n", chance--);
		printf("���ڸ� ���ĺ����� (1~100) : ");
		scanf_s("%d", &answer);
		if (answer > num)
		{
			printf("Down��\n\n");
		}
		else if (answer < num)
		{
			printf("Up ��\n\n");
		}
		else if (answer == num)
		{
			printf("�����Դϴ�.\n\n");
			break;
		}
		else
		{
			printf("�� �� ���� ������ �߻��߾��\n\n");
		}
		if (chance == 0)
		{
			printf("��� ��ȸ�� �� ����ϼ̳׿� �ƽ��� �����߽��ϴ�.\n");
			break;
		}
	}
}