#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[] = {  1, -2, 3,- 4, 5, -6, 7, -8, -9, 10 };//����һ�����飬ͬʱ��ʼ�����г�Ա����

	int i = 0;
	int max=a[0];
	for (i = 1; i < sizeof(a) / sizeof(a[0]); i++)  //sizeof(a) / sizeof(a[0])����a[]���ֽڴ�С����ÿ��Ԫ��ռ���ֽڵó����ж���Ԫ��
	{
		if (a[i] > max) //max��ʼΪ��һ��Ԫ��a[0];ѭ����ÿһ��Ԫ����max�Ƚϣ�������Ϊmax
		{
			max = a[i];
		}

	}
printf("Ԫ�������ֵΪ%d\n", max);
system("pause");
}