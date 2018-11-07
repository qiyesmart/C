
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i < 101; i++)
	{
		sum = sum + flag*1.0 / i;
		flag = -flag;
	}
	printf("%lf", sum);
	system("pause");
	return 0;
}

//编写程序数一下 1到 100 的所有整数中出现多少次数字9
#include<stdlib.h> 
#include<stdio.h>
int main()
	{
	int i = 0;
	int  count = 0;
	for (i = 1; i < 101; i++)
	{
		if (i % 10 == 9)
		count++;
		if (i / 10 == 9)
		count++;
	}
	printf("%d", count);
	system("pause");
	return 0;
}

#include <stdio.h>
int main(int argc, char* argv[], char* envp[])
{
	int i = 0;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	system("pause");
	return 0;
}

#include <stdio.h>
int main(int argc, char* argv[], char* envp[])
{
	int i = 0;
	while (envp[i] != NULL)
	{
		printf("%s\n", envp[i]);
		i++;
	}
	system("pause");
	return 0;
}

//交换a，b值
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}

//找数组中最大的值
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int a[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int max = a[0];
	int i = 0;
	for (i = 1; i < 8; i++)
	{
		if (a[i]>max)
		max = a[i];
	}
	printf("max=%d\n", max);
	system("pause");
	return 0;
}

//从大到小排序
#include<stdlib.h>
#include<stdio.h>
void swap(int * x, int * y)
{
	int temp =*x;
	*x = *y;
	*y = temp;
}
int main()
{
	int a = 12;
	int b = 8;
	int c = 82;
	if (a < b)
	{
		swap(&a, &b);
	}
	if (a <c)
	{
		swap(&a, &c);
	}
	if (b < c)
	{
	swap(&b, &c);
	}
	printf("%d %d %d\n", a, b, c);
	system("pause");
	return 0;
}

//复制字符串
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	char *ret = dest;
	assert(dest && src);

	while(*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr[20] = {0};
	my_strcpy(arr, "hello world");
	printf("%s\n", arr);
	system("pause");
	return 0;
}

//连接两个字符串
#include<assert.h>
#include<stdio.h>
char * mystract(char *  sr, const char * tr)
{
	assert(sr&&tr);
	char *th = sr;
	while (*sr)
	{
		*sr++;
	}
	while (*tr)
	{
		*sr++ = *tr++;
	}
	return  th;
}
int  main()
{
	char   arr1[20] = "hello";;
	char   arr2[10] = "world";
	mystract(arr1, arr2);
	printf("%s", arr1);
	system("pause");
	return 0;
}

//奇数排列在偶数前面
#include<stdio.h>
void  test(int M[], int j)
{
	int n;
	for (n = 0; n <j; n++)
	{
		printf("%d\n", M[n]);
	}

}
int main()
{
	int S[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int len = sizeof(S) / sizeof(S[0]);
	int i, j = 0;
	int M[12] = { 0 };
	for (i = 0; i < len; i++)

	{
		if (S[i] % 2 == 1)
			printf("%d\n", S[i]);
		else
			M[j++] = S[i];
	}
	test(M, j);
	system("pause");
	return 0;
}
