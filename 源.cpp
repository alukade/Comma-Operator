#include<stdio.h>
int main()
{
	int a, b, c;
	a = (b = 3, (c = b + 4) + 5);//��������������������������㣨����С���ŵ����ȼ���
	printf("a=%d", a);
}
