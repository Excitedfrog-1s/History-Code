#include<stdio.h>
#include<string.h>
 int main()
 {
	 int a,b,x;
	 printf("������������������ö��Ÿ���Ҫ����������ҾͲ�֪����\n");
     loop:
	 scanf_s("%d,%d",&a,&b);
	 if(a<b)
	 {
		 x=a;
		 a=b;
		 b=x;
		 printf("������a=%d,b=%d\n",a,b);
	 }
	 else
	 {
		 printf("����ž������ž����ĵ���Ҫը�ˣ���\n");
	 }
	 goto loop;
 }
