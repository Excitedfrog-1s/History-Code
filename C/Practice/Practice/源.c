#include<stdio.h>

int main()
{
	int i, a, sum = 0;
	printf("������һ��������\n");
	scanf_s("%d", &a);
	for (i = 1; i <= a; i++)
	{
		sum += i;
	}
	printf("��0�ӵ���������ĺ�Ϊ��%d\n", sum);
	return 0;
}