#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//递归实现一个整数各个位相加
//int DigitSum(int n)
//{
//	if (n > 9)
//		return n % 10 + DigitSum(n / 10);
//	else
//	   return n;
//}
//int main()
//{
//	int n = 1729;
//	int ret = DigitSum(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//

//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
int main()
{
	int money = 0;
	int total = 0;//喝的瓶数
	int empty = 0;
	scanf("%d", &money);
	total = money;
	empty = money;
	while (empty > 1)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d", total);
	system("pause");
	return 0;
}