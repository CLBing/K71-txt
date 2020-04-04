#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[] = {  1, -2, 3,- 4, 5, -6, 7, -8, -9, 10 };//定义一个数组，同时初始化所有成员变量

	int i = 0;
	int max=a[0];
	for (i = 1; i < sizeof(a) / sizeof(a[0]); i++)  //sizeof(a) / sizeof(a[0])是用a[]总字节大小除以每个元素占有字节得出共有多少元素
	{
		if (a[i] > max) //max初始为第一个元素a[0];循环中每一个元素与max比较，大的则成为max
		{
			max = a[i];
		}

	}
printf("元素中最大值为%d\n", max);
system("pause");
}