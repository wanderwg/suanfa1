//��֪��һ��5*5�ĸ��ӱ�A�����Ͻǵ�λ�ã�B�����½ǵ�λ����
//��A��B���ߣ�ÿ��ֻ���ƶ�һ�񣬲���ֻ�����»������ƶ�
//��ô��A��B�����ж������ƶ�������

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
