#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//дһ������Խ�һ�����ֶ����Ƶ�����λ��ż��λ����
#define SWAP(x) ((((x)&0x55555555)<<1)+(((x)&0xaaaaaaaa)>>1))
int main()
{
	int a = 10;
	int ret = SWAP(a);
	printf("%d", ret);
	system("pause");
	return 0;
}

 //��д������unsigned int  reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//�磺��32λ������25���ֵ�������и�λ��00000000000000000000000000011001
//��ת�󣺣�2550136832��10011000000000000000000000000000
//���������أ�2550136832
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

// ��ƽ��ֵ��a&b����������������ͬλ�����ƽ��ֵ��(a^b) >> 1�������������Ʋ���ͬλ�����ƽ��ֵ
int main()
{
	int a = 10;
	int b = 20;
	int aver = (a&b) + ((a^b) >> 1);
	printf("%d", aver);
	system("pause");
	return 0;
}

//���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
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

//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 
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

//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
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

//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
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

//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
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

// �ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
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
