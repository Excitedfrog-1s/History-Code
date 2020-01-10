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
	printf("共%d种字符\n", count - 1);//需要减去回车符
	return 0;
}