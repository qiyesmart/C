#define _CRT_SECURE_NO_WARNINGS 1

//�ݹ��ӡ1234
#include<stdio.h>
void Print(int n)
{
	if (n > 9)
	{
		Print(n / 10);
	}
	printf("%d", n % 10);
}
int main()
{
	int a = 1234;
	Print(1234);
	system("pause");
	return 0;
}

//���ַ�������
#include <stdio.h>
int Strlen(const char*str)
{
	if (*str == '\0')
		return 0;
	else return 1 + Strlen(str + 1);
}
int main()
{
	char *p = "abcdef";
	int len = Strlen(p);
	printf("%d\n", len);
	system("pause");
	return 0;
}

//��n�Ľ׳�
//�ݹ�
int factorial(int n)
{
	if (n <= 1)
		return 1;
	else
		return n* factorial(n - 1);
}
int  main()
{
	int ret = 0;
	int n = 0;
	scanf("%d", &n);
	ret = factorial(n);
	printf("%d", ret);
	system("pause");
	return 0;
}

//�ǵݹ�
int factorial2(int n)
{
	int c = 1;
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		c = c*i;
	}
	return c;
}
int  main()
{
	int ret = 0;
	int n = 0;
	scanf("%d", &n);
	ret = factorial2(n);
	printf("%d", ret);
	system("pause");
	return 0;
}

//��쳲�������
//�ݹ�
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}
int  main()
{
	int ret = 0;
	int n = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d", ret);
	system("pause");
	return 0;
}

//�ǵݹ�
int fib2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while(n > 2)
	{
		c = a + b;
		b= c;
		a = b;
		n--;
	}
	return c;
}
int  main()
{
	int ret = 0;
	int n = 0;
	scanf("%d", &n);
	ret = fib2(n);
	printf("%d", ret);
	system("pause");
	return 0;
}

//���һԪ���η���
#define EXP  0.000000001
#include<math.h>
int main()
{
     float a = 0.0;
     float b = 0.0;
     float c = 0.0;
     scanf("%f%f%f",&a,&b,&c);
	 if (a > -EXP&&a < EXP)
	 {
		 printf("����һԪ���η���");
	 }
     else
    {
		 double d = b*b - 4 * a*c;
		 int disc = (int )d;
        if (disc>-EXP&&disc < EXP)
        {
           printf("��һ���⣺f%", -b / (2 * a));
         }
        else if (disc >= EXP)
         {
         printf("�������⣺f% f%",
         ((-b) + sqrt(disc)) / (2 * a),
         ((-b) - sqrt(disc)) / (2 * a));
         }
        else
        {
            printf("�޽�");
         }
     }
       return 0;
}

//�ж�������������û����ȵ�Ԫ��
int main()
{
	int arr1[] = { 1, 3, 5, 7, 9 };
	int arr2[] = { 2, 4, 6, 8, 0, 1 };

	int i = 0;
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		//arr1[i];
		int j = 0;
		for (j = 1; j < sizeof(arr2) / sizeof(arr2[0]); j++)
		{
			if (arr1[i] == arr2[j])
			{
				printf("��\n");
				break;
			}
		}
		if (arr1[i] == arr2[j])
		{
			break;
		}
	}
	if (i == sizeof(arr1) / sizeof(arr1[0]))
		printf("û��\n");
	system("pause");
	return 0;
}

//���0��999֮������С�ˮ�ɻ����������
#include<stdlib.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		int sum = 0;
		int n = 1;
		int tmp = i;
		while (tmp/10)
		{
			tmp = tmp / 10;
			n++;
		}
		tmp = i;
		while (tmp)
		{
			sum = sum + (int)(pow(tmp % 10, n));
			tmp = tmp / 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}