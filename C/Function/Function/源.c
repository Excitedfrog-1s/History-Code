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
	printf("�����������������Զ��Ÿ�����\n");
	scanf_s("f%,f%", &a, &b);
	avg = average(a,b);
	printf("����������ƽ����Ϊ%.2lf\n", avg);
	return 0;
}

