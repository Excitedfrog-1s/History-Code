#include<stdio.h>
#define LEN 6

int main()
{
	int a[LEN][LEN];
	int row,col;
	
	for (row = 0; row < LEN;row=row+2)//LEN��ֵ�Ѿ������涨����
	for (col = 0; col < LEN; col=col+2)
		a[row][col] = row*LEN + col + 2;
	for (row = 0; row < LEN; row=row+2)
	{
		for (col = 0; col < LEN; col=col+2) printf("%4d", a[row][col]);
		putchar('\n');
	}
	putchar('\n');
}