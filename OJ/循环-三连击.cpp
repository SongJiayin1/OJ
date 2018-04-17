/*
题目描述
将1，2，…，9共9个数分成三组，分别组成三个三位数，且使这三个三位数构成1：2：3的比例，试求出所有满足条件的三个三位数。

思路：遍历第一个数，因为第三个数最大也就是999，所以第一个数最大也就是333，然后有第一个数得出第二和第三个数（分别是
两倍和三倍，利用数组flag存放数字是否出现过，比如flag【1】为true的话就说明数字1出现过，分别拆解三个数，得到它们的各位、
十位和百位数字，然后设下标为这个数字的flag为true，最后遍历flag，看有没有数字不是true，如果有就不满足条件。
*/

#include <stdio.h>

int main()
{
	bool flag[10];
	int num[3];
	for (num[0] = 123; num[0] < 333; num[0]++)
	{
		for (int i = 1; i < 10; i++)
			flag[i] = false;
		num[1] = num[0] * 2;
		num[2] = num[0] * 3;
		for (int i = 0; i < 3; i++)
		{
			flag[num[i] % 10] = true;
			flag[num[i] / 100] = true;
			flag[num[i] / 10 % 10] = true;
		}
		bool ans = true;
		for (int i = 1; i < 10; i++)
			if (flag[i] == false)
			{
				ans = false;
				break;
			}
		if (ans)
			printf("%d %d %d\n", num[0], num[1], num[2]);
	}
}