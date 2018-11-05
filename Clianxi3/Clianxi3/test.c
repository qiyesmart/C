#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//判断大小端
//方式1
int main()
{
	int a = 1;
	//OX 00 00 00 01
	//0X 01 00 00 00
	if (*(char*)&a == 1)//截取第一个字节大小
	{
		printf("小端存储\n");
	}
	else
	{
		printf("大端存储\n");
	}
	system("pause");
	return 0;
}

//方式2
int check_sys()
{
	int a = 1;
	//OX 00 00 00 01
	//0X 01 00 00 00
	if (*(char*)&a == 1)
		return 1;
	else
		return 0;
}
int main()
{
	int t = check_sys();
	if (t == 1)
	{
	  printf("小端存储\n");
	}
	else
	{
		printf("大端存储\n");
	}
	system("pause");
	return 0;
}
//方式3用联合实现
int check_sys()
{
	union S
	{
		int a;
		char c;
	} s;
	s.a = 1;
	return s.c;
	
}
int main()
{
	int t = check_sys();
	if (t == 1)
	{
		printf("小端存储\n");
	}
	else
	{
		printf("大端存储\n");
	}
	system("pause");
	return 0;
}

//多个字符从两端移动，向中间汇聚
#include<stdlib.h>
int main()
{
	char arr1[] = "welcome to bit !!!!!";
	char arr2[] = "####################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;}

	system("pause");
	return 0;
}

//折半查找
#include<stdlib.h>
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int k = 7;
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0]) - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr1[mid] == k)
		{
			printf("找到了：%d", mid);
			break;
		}
		else if (arr1[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr1[mid] < k)
		{
			left = mid + 1;
		}
	}
	if (left>right)
	{
		printf("找不到");
	}
	system("pause");
	return 0;
}

//模拟三次密码输入的场景
#include<string.h>
int main()
{
	int i = 0;
	char aduo[20] = { 0 };
	for (i = 0; i < 3;i++)
	{
		printf("请输入密码:>");
		scanf("%s", aduo);
		if (strcmp(aduo, "123456")==0)
		{
			printf("登陆成功\n");
		}
		else
		{
			printf("密码错误：还有%d次机会", 2 - i);
		}
     }
	if (i==3)
	{
		printf("登录失败");
	}
	system("pause");
	return 0;
}

///求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
#include<stdlib.h>
int main()
{
	int a = 0;
	int n = 0;
	int k = 0;
	int i = 0;
	int sum = 0;
	scanf("%d%d", &a, &n);
	for (i = 0; i < n; i++)
	{
		k = k * 10 + a;
		sum = sum + k;
	}
	printf("%d", sum);
	system("pause");
	return 0;
}

//在屏幕上输出菱形图案
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int line = 0;
	int i = 0;
	scanf("%d", &line);
	//上半部分
	for (i = 0; i<line; i++)
	{
		//每一行的打印
		//打印空格
		int j = 0;
		for (j = 0; j<line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j<2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//下半部分
	for (i = 0; i<line - 1; i++)
	{
		//打印一行
		//空格
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//*
		for (j = 0; j<2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}