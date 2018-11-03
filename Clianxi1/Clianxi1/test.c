#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//写一个宏可以将一个数字二进制的奇数位和偶数位交换
#define SWAP(x) ((((x)&0x55555555)<<1)+(((x)&0xaaaaaaaa)>>1))
int main()
{
	int a = 10;
	int ret = SWAP(a);
	printf("%d", ret);
	system("pause");
	return 0;
}

 //编写函数：unsigned int  reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//如：在32位机器上25这个值包含下列各位：00000000000000000000000000011001
//翻转后：（2550136832）10011000000000000000000000000000
//程序结果返回：2550136832
unsigned int  reverse_bit(unsigned int a)
{
	unsigned int ret= 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		ret += (((a >> i) & 1) << (31 - i));
	}
	return ret;
}
int main()
{
	unsigned int a = 25;
	unsigned int ret = reverse_bit(a);
	printf("%u", ret);
	system("pause");
	return 0;
}

// 求平均值，a&b将两个数二进制相同位相加求平均值，(a^b) >> 1将两个数二进制不相同位相加求平均值
int main()
{
	int a = 10;
	int b = 20;
	int aver = (a&b) + ((a^b) >> 1);
	printf("%d", aver);
	system("pause");
	return 0;
}

//编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
int find(int * man, int sz)
{
	int ret = 0;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		ret = ret^man[i];
	}
	return ret;

}
int main()
{
	int man[] = { 1, 2, 3, 4, 1, 2, 3, 4, 5 };
	int sz = sizeof(man) / sizeof(man[0]);
	int ret = find(man, sz);
	printf("%d", ret);
	system("pause");
	return 0;
}

//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
int count_one_bit(int num)
{
	int count = 0;
	while (num)
	{
		num = num&(num - 1);
		count++;
	}
	return count;
}
int main()
{
	int a = 1999;
	int b = 2299;
	int num = a^b;
	int ret = count_one_bit(num);
	printf("%d", ret);
	system("pause");
	return 0;
}

//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
int main()
{
	int i = 0;
	int a = 0;
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d  ", i, j, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
void  Initarr(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i;
	}
}
void  Print(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
		printf("\n");
}
void Reservearr(int *arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10];
	int sz = sizeof(arr) / sizeof(arr[0]);
	Initarr(arr,sz);
	Print(arr,sz);
	Reservearr(arr, sz);
	Print(arr, sz);
	system("pause");
	return 0;
}

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if ((b == 2) + (a == 3) == 1 &&
							(b == 2) + (e == 4) == 1 &&
							(c == 1) + (d == 2) == 1 &&
							(c == 5) + (d == 3) == 1 &&
							(e == 4) + (a == 1) == 1)
						{
							if ((a*b*c*d*e == 120) && (a + b + c + d + e == 15))
								printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
						}
                     }
				}
			}
		}
	}
	system("pause");
	return 0;
}

// 日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
int main()
{
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
			printf("%c\n", killer);
	}
	system("pause"); 
	return 0;
}
