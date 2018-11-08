
//模拟实现strlen
//循环
#include<stdio.h>
#include<assert.h>
int my_strlen1(char *str)
{
	assert(*str);
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char *p = "abcdef";
	int len = my_strlen1(p);
	printf("%d",len);
	system("pause");
	return 0;
}
//递归
#include<stdio.h>
#include<assert.h>
int my_strlen2(char *str)
{
  assert(*str);
	if (*str == '\0')
	     return 0;
	else
	    return 1 + my_strlen2(str + 1);
	
}
int main()
{
	char *p = "abcdef";
	int len = my_strlen2(p);
	printf("%d", len);
	system("pause");
	return 0;
}
//指针-指针
#include<stdio.h>
#include<assert.h>
int my_strlen3(char *str)
{
	assert(*str);
	char *atr = str;
	while (*str)
	{
		str++;
	}
	return str-atr;
}
int main()
{
	char *p = "abcdef";
	int len = my_strlen3(p);
	printf("%d", len);
	system("pause");
	return 0;
}

//模拟实现strcpy
#include<stdio.h>
#include<stdlib.h>
char *	my_strcpy(char *crr, char *drr)
{
	while (*drr)
	{
		*crr = *drr;
		drr++;
		crr++;
	}
	*crr = *drr;//将'\0'拷进去
	return crr;
}
int main()
{
	char arr[20] = { 0 };
	my_strcpy(arr, "aduoduo");
	printf("%s\n", arr);
	system("pause");
	return 0;
}

//模拟实现strcat
#include<stdio.h>
#include<stdlib.h>
char *my_strcat(char *crr, char *drr)
{
	//找*crr的‘\0’
	while(*crr)
	{
		crr++;
    }
	//开始复*drr
	while ((*crr++ = *drr++))
	{
		;
	}
	return crr;
}
int main()
{
	char arr1[20] = "aduoduo";
	char arr2[14] = " shi tou zhu";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	system("pause");
	return 0;
}

//模拟实现strcmp
#include<stdio.h>
#include<stdlib.h>
int my_strcmp(char *crr, char *drr)
{
	while (*crr == *drr)
	{
		if (*crr == '\0')
		{
			return 0;
		}
		crr++;
		drr++;
	}
	if (*crr > *drr)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	char arr1[20] = "aduoduoa";
	char arr2[14] = "aduoduob";
	int ret=my_strcmp(arr1, arr2);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

//模拟实现strstr
#include<stdio.h>
#include<stdlib.h>
char * my_strstr( char *crr,  char *drr)
{
	 char *cur = crr;
	 char *s1 = crr;
	 char *s2 = drr;
	 //如果drr为空
	if (*drr == '\0')
	{
		return crr;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = drr;
		while (*s1&&*s2&&*s1 == *s2)
		{

			{
				s1++;
				s2++;
			}
			if (*s2 == '\0')
			{
				return cur;
			}
		}
		//匹配不成功，则cur跳到cur指向字符串下一个元素接着与子字符串比较
		cur++;
	}
	//匹配失败
	return 0;
}
int main()
{
	char *c = "aduoduoa";
	char *d = "duodd";
	char * ret = my_strstr(c, d);
	if (ret != NULL)
		printf("%s\n", ret);
	else
		printf("找不到\n");
	system("pause");
	return 0;
}

//模拟实现memcpy（针对内存块）
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void  *	my_memcpy(void  *crr, void  *drr,size_t count)
{
	void *ret = crr;
	assert(crr&&drr);
	while (count--)
	{
		*(char*)crr = *(char *)drr;
		crr = (char*)crr + 1;
		drr = (char*)drr + 1;
	}
		return ret;
}
int main()
{
	int arr1[20] = { 0,0,0,0,0 };
	int  arr2[20] = { 1,2,3,4,5};
	my_memcpy(arr1,arr2,20);
	system("pause");
	return 0;
}