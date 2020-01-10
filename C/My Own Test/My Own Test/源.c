#include<stdio.h>
#include<string.h>

int main()
{
	char x,y;
	loop:
	x=getchar();
	y = x + 32;
	putchar(y);
	goto loop;
}