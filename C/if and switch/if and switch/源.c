#include<stdio.h>
#include<string.h>

int main()
{
	int a, b, c;
	loop:
	printf("�������������ɣ�\n");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("��С�����ǣ�");
	if (a<b)//  Level 1
	  if (a < c) printf("%d\n", a);
	  else printf("%d\n", c);
	else// of Level 1
	  if (c>b) printf("%d\n", b);
	  else printf("%d\n", c);

	  goto loop;
}