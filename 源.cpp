#include<stdio.h>
int main()
{
	int a, b, c;
	a = (b = 3, (c = b + 4) + 5);//逗号运算符，从左往右依次运算（忽略小括号的优先级）
	printf("a=%d", a);
}
