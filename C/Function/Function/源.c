#include<stdio.h>

double average(double x, double y)
{
	return(x + y) / 2.0;
}

int main()
{
	double a;
	double b;
	double avg;
	printf("请输入两个整数并以逗号隔开：\n");
	scanf_s("f%,f%", &a, &b);
	avg = average(a,b);
	printf("这两个数的平均数为%.2lf\n", avg);
	return 0;
}

