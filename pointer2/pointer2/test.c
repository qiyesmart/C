#define _CRT_SECURE_NO_WARNINGS 1
//ģ��ʵ��memmove

//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//void  *	my_memove(void  *dest, void  *src, size_t count)
//{
//	void *ret = dest;
//	if (dest < src)//��ǰ��󿽱�
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char *)src;
//         }
//	}
//	else
//	{//�Ӻ���ǰ����
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	
//	int arr1[20] = { 1, 2, 3, 4, 5,6,7,8,9, };
//	my_memove(arr1, arr1+2, 20);
//	system("pause");
//	return 0;
//}


//ʵ�ּ���������
#include <stdio.h>
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a*b;
}
int div(int a, int b)
{
	return a / b;
}
int main()
{
	int x, y;
	int input = 1;
	int ret = 0;
	while (input)
	{
		printf("*************************\n");
		printf(" 1:add 2:sub \n");
		printf(" 3:mul 4:div \n");
		printf("*************************\n");
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("�����������");
			scanf("%d %d", &x, &y);
			ret = add(x, y);
			break;
		case 2:
			printf("�����������");
			scanf("%d %d", &x, &y);
			ret = sub(x, y);
			break;
		case 3:
			printf("�����������");
			scanf("%d %d", &x, &y);
			ret = mul(x, y);
			break;
		case 4:
			printf("�����������");
			scanf("%d %d", &x, &y);
			ret = div(x, y);
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
		printf("ret = %d\n", ret);
	}
	return 0;
}