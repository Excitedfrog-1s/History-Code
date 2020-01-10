#include<stdio.h>
#include<string.h>
 int main()
 {
	 int a,b,x;
	 printf("来随便输两个整数吧用逗号隔开要是乱来后果我就不知道了\n");
     loop:
	 scanf_s("%d,%d",&a,&b);
	 if(a<b)
	 {
		 x=a;
		 a=b;
		 b=x;
		 printf("交换后a=%d,b=%d\n",a,b);
	 }
	 else
	 {
		 printf("噼里啪啦噼里啪啦你的电脑要炸了！！\n");
	 }
	 goto loop;
 }
