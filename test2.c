#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int cmp_str(char str[],char strs[])
{
	int i = 0;
	while (1)
	{
		if (strncmp(str+i,strs,strlen(strs)) == 0)
		{
			break;
		}
		i++;
	}
	return i;
}



int main()
{
	char str[100] = { 0 };
	char str1[100] = { 0 };
	char str2[100] = { 0 };
	printf("请输入：字符串 帧头 帧尾\n");
	scanf("%s %s %s", str, str1, str2);

	int a = cmp_str(str, str1);
	int b = cmp_str(str, str2);

	printf("%d %d\n", a, b);

	char output[100] = { 0 };
	strncpy(output, str + a, b - a + strlen(str2));

	printf("%s", output);
	
	return 0;

}
