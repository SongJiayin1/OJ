#include <stdio.h>

int main()
{
	int save[13];
	int s = 0, m = 0;
	for (int i = 1; i < 13; i++)
		scanf("%d", &save[i]);
	int i = 1;
	bool flag = true;
	for (; i < 13; i++)
	{
		int temp = s + 300 - save[i];
		if (temp < 0)
		{
			flag = false;
			break;
		}
		while (temp >= 100)
		{
			temp -= 100;
			m += 100;
		}
		s = temp;
	}
	if (flag)
		printf("%d\n", (int)(m * 1.2 + s));
	else
		printf("%d\n", -i);
	return 0;
}