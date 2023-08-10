//对代码清单4-5中的程序进行修改，当输入的值为负数时不执行换行操作。

#include<stdio.h>

int main(void)
{
	int no;

	printf("请输入一个正数.");
	scanf("%d", &no);

	while (no >= 0)
	{
		printf("%d ", no);
		no--;
	}
	if (no < 0)
		putchar('\n');
        
	return 0;
}
