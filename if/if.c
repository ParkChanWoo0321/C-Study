#include <stdio.h>
#include<time.h>
int main(void)
{
	int age = 25;
	if (age >= 20)
		printf("일반인 입니다.");
	else
		printf("학생입니다");

	int age = 138;
	if (age >= 8 && age <= 13)
	{
		printf("초등학생입니다.\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("중학생입니다.\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("고등학생입니다.\n");
	}
	else
	{
		printf("학생이 아닌가봐요.\n");
	}

	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("나머지 학생은 집에 가세요.\n");
			break;
		}
		printf("%d 번 학생은 조별 발표 준비를 하세요.\n", i);
	}

	for (int i = 1; i < 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d 번 학생은 결석입니다.\n", i);
				continue;
			}
			printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);
		}
	}

	int a = 10;
	int b = 11;
	int c = 13;
	int d = 13;
	if (a == b || c == d)
	{
		printf("a 와 b 혹은 c 와 d 의 값이 같습니다.\n");
	}
	else
	{
		printf("값이 서로 다르네요\n");
	}

	// 가위 0 바위 1 보 2
 	srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("보\n");
	}
	else
	{
		printf("몰라요\n");
	}

	srand(time(NULL));
	int i = rand() % 3;
	switch (i)
	{
	case 0: printf("가위\n"); break;
	case 1: printf("바위\n"); break;
	case 2: printf("보\n"); break;
	default: printf("몰라요\n"); break;
	}
	int age = 17;
	switch (age)
	{
	case8:
	case9:
	case10:
	case11:
	case12:
	case13:printf("초등학생입니다.\n"); break;
	case14:
	case15:
	case16:printf("중학생입니다.\n"); break;
	case17:
	case18:
	case19:printf("고등학생입니다.\n"); break;
	default:printf("학생이 아닌가봐요.\n"); break;
	}

	//Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1;//1~100
	printf("숫자 : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (1) // 1 : 참 0 : 거짓
	{
		printf("남은 기회 %d 번\n", chance--);
		printf("숫자를 맞쳐보세요 (1~100) : ");
		scanf_s("%d", &answer);
		if (answer > num)
		{
			printf("Down↓\n\n");
		}
		else if (answer < num)
		{
			printf("Up ↑\n\n");
		}
		else if (answer == num)
		{
			printf("정답입니다.\n\n");
			break;
		}
		else
		{
			printf("알 수 없는 오류가 발생했어요\n\n");
		}
		if (chance == 0)
		{
			printf("모든 기회를 다 사용하셨네요 아쉽게 실패했습니다.\n");
			break;
		}
	}
}