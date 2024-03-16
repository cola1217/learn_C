#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

void reverse(char str[], int start, int end)
{
	
	while (1)
	{
		if (start == end || start - 1 == end)
		{
			break;
		}
		char a = str[end-1];
		str[end-1] = str[start];
		str[start] = a;
		start++;
		end--;
	}
}

int main()
{
	char str[128] = { 0 };
	char ch;
	int i = 0;

	printf("请输入");
	while ((ch = getchar()) != '\n')
	{
		str[i++] = ch;
	}

	printf("%s\n", str);
	reverse(str, 0, i);
	printf("%s\n",str);

	i = 0;
	int begin = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			reverse(str, begin, i);
			begin = i+1;
		}
		i++;
	}
	reverse(str, begin, i);    //最后一个单词没有进行反转，补充一下

	printf("%s\n", str);


	return 0;
}
