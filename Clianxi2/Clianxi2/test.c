#define _CRT_SECURE_NO_WARNINGS 1

//  ����Ļ�ϴ�ӡ������ǡ�
#include<stdio.h>//  
int main()
{
	int i = 0;
	int j = 0;
	int arr[10][10] = { 0 };
	for (i = 0; i <10; i++)
	{
		for (j = 0; j <10; j++)
		{
			if (j == 0)
				arr[i][j] = 1;
			if (i==j)
				arr[i][j] = 1;
			if ((i > 1) && (j > 0))
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}

		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <=i; j++)
		{
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
int main()
{
	int i = 0;
	int num = 10;
	for (i = 31; i >= 1; i=i - 2)
	{
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
	for (i = 30; i >= 0; i=i - 2)
	{
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
	system("pause");
} 

//дһ���������ز����������� 1 �ĸ���
int main()
{
	int i = 0;
	int count = 0;
	int num = -1;
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
			count++;
	}
	printf("%d", count);
	system("pause");
	return 0;
}

//#include<stdio.h.> //��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch<='z'&&ch>='a')
		{
			putchar(ch - 32);
		}
		else if (ch<='Z'&&ch>='A')
		{
			putchar(ch + 32);
		}
		else if (ch<='9'&&ch>='0')
		{
			;
		}
		else
		{
			putchar(ch);
		}
    }
	return 0;
}