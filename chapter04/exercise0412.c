//读取一个整数，显示其位数。
/* 
请输入一个正整数：1963
1963的位数是：4
 */

#include<stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0;

	printf("请输入一个正整数：");
	scanf("%d", &a);

	b = a;
	while (b > 0)
	{
		b /= 10;
		c++;
	}

	printf("%d的位数是%d", a, c);
    
	return 0;
}
