//已知有一个5*5的格子表，A在左上角的位置，B在右下角的位置上
//从A往B处走，每次只能移动一格，并且只能向下或向右移动
//那么从A到B，共有多少种移动方法。

#include <stdio.h>
#include <stdlib.h>
void fillForm(int a[][50], int x, int y)
{
	int i, j;

	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= y; j++)
		{
			if (i == 1 && j == 1)
			{
				a[i][j] = 1;
			}
			else
			{
				a[i][j] = a[i - 1][j] + a[i][j - 1];
			}
		}
	}
}
int main() {
	int a[50][50] = { 0 };
	fillForm(a, 5, 5);
	printf("%d\n", a[5][5]);
	system("pause");
	return 0;
}
