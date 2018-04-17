/*
题目描述
已知：Sn= 1＋1／2＋1／3＋…＋1／n。显然对于任意一个整数K，当n足够大的时候，Sn大于K。

现给出一个整数K（1<=k<=15），要求计算出一个最小的n；使得Sn＞K。

注意：注意循环条件
*/

#include <stdio.h>

int main()
{
	int k;
	scanf("%d", &k);
	int n = 0;
	for (double s = 0; s <= k; n++, s += 1.0 / n);
	printf("%d\n", n);
	return 0;
}