#include<stdio.h>

int main()
{
	int i, a, sum = 0;
	printf("请输入一个整数：\n");
	scanf_s("%d", &a);
	for (i = 1; i <= a; i++)
	{
		sum += i;
	}
	printf("从0加到你这个数的和为：%d\n", sum);
	return 0;
}