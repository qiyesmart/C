#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//strncpy����
char * mystrncpy(char * dest, char * source, size_t count)
{
	char *start = dest;
	while (count && (*dest++ = *source++))
	{
		count--;
	}
	//Դ�ַ����ĳ���С��num���򿽱����ַ���֮����Ŀ��ռ�ĺ���׷��0��ֱ��num��
	if (count)
	{
		while (--count)
		{
			*dest++ = '\0';
		}
	}
	return start;
}
int main()
{
	char str1[20] = "0";
	char str2[20] = "or not to be";
	mystrncpy(str1, str2, 6);
	printf("%s", str1);
	system("pause");
	return 0;
}

//strncat����
char * mystrncat(char *front, char *back, size_t count)
{
	char * start = front;
	while (*front++ != '\0')
	{
		;
	}
	//�ҵ�'\0'λ��
	front--;
	while (count--)
	{
		if (!(*front++ = *back++))
		{
			return start;
		}
    }
	//���Դ�ַ���û��'\0'�����Զ����'\0'
	*front = '\0';
	return start;
}
int main()
{
	char str1[20] = "or";
	char str2[20] = "or not to be";
	mystrncat(str1, str2, 6);
	printf("%s", str1);
	system("pause");
	return 0;
}

