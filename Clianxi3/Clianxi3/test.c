#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�жϴ�С��
//��ʽ1
int main()
{
	int a = 1;
	//OX 00 00 00 01
	//0X 01 00 00 00
	if (*(char*)&a == 1)//��ȡ��һ���ֽڴ�С
	{
		printf("С�˴洢\n");
	}
	else
	{
		printf("��˴洢\n");
	}
	system("pause");
	return 0;
}

//��ʽ2
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
	  printf("С�˴洢\n");
	}
	else
	{
		printf("��˴洢\n");
	}
	system("pause");
	return 0;
}
//��ʽ3������ʵ��
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
		printf("С�˴洢\n");
	}
	else
	{
		printf("��˴洢\n");
	}
	system("pause");
	return 0;
}

//����ַ��������ƶ������м���
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

//�۰����
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
			printf("�ҵ��ˣ�%d", mid);
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
		printf("�Ҳ���");
	}
	system("pause");
	return 0;
}

//ģ��������������ĳ���
#include<string.h>
int main()
{
	int i = 0;
	char aduo[20] = { 0 };
	for (i = 0; i < 3;i++)
	{
		printf("����������:>");
		scanf("%s", aduo);
		if (strcmp(aduo, "123456")==0)
		{
			printf("��½�ɹ�\n");
		}
		else
		{
			printf("������󣺻���%d�λ���", 2 - i);
		}
     }
	if (i==3)
	{
		printf("��¼ʧ��");
	}
	system("pause");
	return 0;
}

///��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
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

//����Ļ���������ͼ��
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int line = 0;
	int i = 0;
	scanf("%d", &line);
	//�ϰ벿��
	for (i = 0; i<line; i++)
	{
		//ÿһ�еĴ�ӡ
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j<line - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j<2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//�°벿��
	for (i = 0; i<line - 1; i++)
	{
		//��ӡһ��
		//�ո�
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