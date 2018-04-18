/*
题目描述
试计算在区间 1 到 n 的所有整数中，数字 x（0 ≤ x ≤ 9）共出现了多少次？例如，在 1

到 11 中，即在 1、2、3、4、5、6、7、8、9、10、11 中，数字 1 出现了 4 次。

输入输出格式
输入格式：
输入文件名为 count.in。

输入共 1 行，包含 2 个整数 n、x，之间用一个空格隔开。

输出格式：
输出文件名为 count.out。

输出共 1 行，包含一个整数，表示 x 出现的次数。

注意：另一个数对10取余结果是这个数的个位数，把这个数除以10就把这个数的个位去掉了，直到这个数等于0.
*/

#include <stdio.h>

int main()
{
	long n;
	int x, ans = 0;
	scanf("%ld%d", &n, &x);
	for (long i = 1; i <= n; i++)
	{
		long temp = i;
		while (temp)
		{
			if (temp % 10 == x)
				ans++;
			temp /= 10;
		}
	}
	printf("%d\n", ans);
	return 0;
}