#include<stdio.h>

int main()
{
	char old, new;
	int count = 0;
	old = '\n';
	do
	{
		new = getchar();
		if (old == new)
			continue;
		old = new;
		++count;
	} while (new != '\n');
	printf("��%d���ַ�\n", count - 1);//��Ҫ��ȥ�س���
	return 0;
}