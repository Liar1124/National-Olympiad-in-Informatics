#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

void getni(int *ni, int n)
{
	int add = 0;
	memset(ni, 0, sizeof(ni));
	ni[0] = 1;

	for (int i = 1; i <= n; i++)
	{
		for (int bit = 0; bit < n; bit++)
		{
			ni[bit] *= i;
			ni[bit] += add;
			add = ni[bit] / 10;
			ni[bit] %= 10;
		}
	}
	return;
}

void add(int *sum, int *ni)
{
	int add = 0;
	for (int i = 0; i < 49; i++)
	{
		sum[i] += ni[i];
		sum[i + 1] += sum[i] / 10;
		sum[i] %= 10;
	}
}

int main()
{
	int sum[50], ni[50];
	memset(sum, 0, sizeof(sum));
	memset(ni, 0, sizeof(ni));
	int input;
	cin >> input;

	for (int i = 1; i <= input; i++)
	{
		getni(ni, i);
		add(sum, ni);
	}

	for (int i = 49, zero = true; i >= 0; i--)
	{
		if (sum[i] == 0 && zero)
		{
			continue;
		}
		if (sum[i] != 0)
			zero = false;
		cout << sum[i];
	}

	return 0;
}
