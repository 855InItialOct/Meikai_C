//像下面一样显示身高和标准体重的对照表。显示的身高范围和间隔由输入的整数值进行控制，标准体重精准到小数点后两位。
/* 
开始数值（cm）：155
结束数值（cm）：190
间隔数值（cm）：4
150cm 49.50kg
160cm 54.00kg
…(以下省略)…
 */

#include<stdio.h>

int main(void)
{
	int begin = 0;
	int end = 0;
	int interval = 0;
	int i = 0 , j=0;

	printf("开始数值(cm):"); scanf("%d", &begin);
	printf("结束数值(cm):"); scanf("%d", &end);
	printf("间隔数值(cm):"); scanf("%d", &interval);

	j = begin;
	for (i = 0; i <= (end - j) / interval; i++)
	{
		printf("%dcm\t\t%.2fkg\n", begin, (begin - 100) * 0.9);
		begin += interval;
	}

	return 0;
}
