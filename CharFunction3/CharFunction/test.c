#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//strncpy函数
char * mystrncpy(char * dest, char * source, size_t count)
{
	char *start = dest;
	while (count && (*dest++ = *source++))
	{
		count--;
	}
	//源字符串的长度小于num，则拷贝完字符串之后，在目标空间的后面追加0，直到num个
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

//strncat函数
char * mystrncat(char *front, char *back, size_t count)
{
	char * start = front;
	while (*front++ != '\0')
	{
		;
	}
	//找到'\0'位置
	front--;
	while (count--)
	{
		if (!(*front++ = *back++))
		{
			return start;
		}
    }
	//如果源字符串没带'\0'，则自动添加'\0'
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

