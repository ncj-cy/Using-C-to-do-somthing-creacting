//写一个函数可以判断一个数是不是素数，范围是100-200
//什么是素数？能被1以及它本身整除的数

//这个代码的逻辑就是在i的范围内（100-200），用j去整除i;此时引入flag=1(假设原始状态i是素数)，如果i整除j是整数，flag被赋予0，并跳出（用j去整除i）这个循环；而我们只打印能使得（flag=1）的（在i这个范围）的素数
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//怎么判断i是不是素数
		//用2到i-1之间的数去试除i
		int flag = 1;//flag为1表示是素数
		int j = 0;
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
			{
				flag = 0;//如果有一个数可以被j整除，说明这个数不是素数，此时跳出循环
				break;
			}
		}
		if (flag == 1)
		{
			count++;
			printf("%d\n", i);
		
		}
		printf("\ncount = %d\n", count);
	}
	return 0;
}