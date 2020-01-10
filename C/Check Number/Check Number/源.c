#include <stdio.h>

int main()
{
	int anInt=9;
	double aDb1;
    int a=10,b=20;
	double d=30.0,r1,r2,x1,x2;

	aDb1=anInt;
	anInt=12.345;
	printf("anInt=%d,aDb1=%f\n",anInt,aDb1);

	r1=a*d+b/2.0;
	x1=a/b-d/20;
	x2=(double)a/b-d/30;
	printf("r1=%f,x1=%f,x2=%f\n",r1,x1,x2);

	r2=r1;
	r1=(int)(r1*x2/-100.0);
	r2=(int)r2*x2/-100.0;
	printf("r1=%f,r2=%f\n",r1,r2);

	return 0;
}