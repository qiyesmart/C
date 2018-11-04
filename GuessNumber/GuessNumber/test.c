#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void menu()
{
	printf("************************\n");
	printf("*****    1.play    *****\n");
	printf("*****    0.exit    *****\n");
	printf("************************\n");
}
void game()
{
	int ret = 0;
	int n = 0;
	ret = rand() % 100 + 1;
	/*printf("%d\n", ret);*/
	while (1)
	{
		printf("请猜数字：>");
		scanf("%d", &n);
		if (n > ret)
		{
			printf("猜大了\n");
		}
		else if (n <ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//随机数生成器
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("玩游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!!!\n");
			break;
		}
	} while (input);
	return 0;
}