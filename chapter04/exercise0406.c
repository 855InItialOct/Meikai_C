//编写一段程序，像下面按照升序显示出小于输入值的所有正偶数。
/* 
请输入一个整数：19
2 4 6 8 10 12 14 16 18
 */

#include<stdio.h>

int main(void)
{
	int a = 0;
	int i = 1;

	printf("请输入一个整数：");
	scanf("%d", &a);

	while (i < a )
	{
		if (i % 2 ==0)
		{
			printf("%d ", i);
		}
		i++;
	}
    
	return 0;
}
