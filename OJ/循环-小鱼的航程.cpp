/*
题目描述
有一只小鱼，它上午游泳150公里，下午游泳100公里，晚上和周末都休息（实行双休日)，假设从周x(1<=x<=7)开始算起，请问这样过了n天以后，小鱼一共累计游泳了多少公里呢？

输入输出格式
输入格式：
输入两个整数x,n(表示从周x算起，经过n天，n在long int范围内）。

输出格式：
输出一个整数，表示小鱼累计游泳了多少公里。

注意：周天的下一天是周一，当天对7求余然后加一可求出下一天是周几。
*/

#include <stdio.h>

int main()
{
	int x;
	long n;
	unsigned long ans = 0;
	scanf("%d%ld", &x, &n);
	for (long i = 0; i < n; i++)
	{
		if (x != 6 && x != 7)
			ans += 250;
		x = x % 7 + 1;
	}
	printf("%ld\n", ans);
	return 0;
}