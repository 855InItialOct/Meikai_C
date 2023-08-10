//对代码清单4-15进行修改，在显示所有约数后显示约数个数
/* 
整数值：4
1
2
4
约数有：3个
 */

#include<stdio.h>

int main(void)
{
	int i = 0, n = 0, m = 0;

	printf("整数值：");
	scanf("%d", &n);	

	for (i = 1; i <= n; i++)
    {
		if (n % i == 0)
        {
            printf("%d ", i);
            printf("\n");
            m++;
        }
    }

    printf("约数有%d个。", m);
    
    return 0;
}
